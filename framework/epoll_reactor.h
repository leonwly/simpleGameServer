/*
 * epoll_reactor.h
 *
 *  Created on: 2011-10-14
 *      Author: gxl2007@hotmail.com
 */

#ifndef EPOLL_REACTOR_H_
#define EPOLL_REACTOR_H_

#include <sys/epoll.h>

namespace king
{

class io_handler ;

class epoll_reactor
{
public:
    enum
    {
        EVENT_NONE = 0x0 ,
        EVENT_READ = EPOLLIN ,
        EVENT_WRITE = EPOLLOUT ,
        EVENT_ERROR = EPOLLERR ,
        EVENT_ALL = EVENT_READ | EVENT_WRITE ,
        EVENT_ONESHOT = EPOLLONESHOT ,
    }  ;

    enum
    {
        MIN_FD_SIZE = 8 ,
        MAX_EVENTS_ONCE = 256 ,
    } ;
    
public:
    epoll_reactor();
    ~epoll_reactor();

public:
    /*
     * @brief initialize , create epoll fd and alloc memory
     * @param [in] max fd slot
     * @return 0 on success , nagtive on failed
     */
    int init(int maxfd) ;

    void fini() ;

    /*
     * @brief register fd handler to epoll engine
     * @param [in] fd to be watched
     * @param [in] handler to callback
     * @param [in] event type
     * @return 0 on success , nagtive on failed
     */
    int add_handler(int fd , io_handler* handler,int event_type) ;

    /*
     * @brief modify fd watched
     * @param [in] fd have been watched
     * @param [in] handler to callback
     * @param [in] event type
     * @return 0 on success
     */
    int mod_handler(int fd , io_handler* handler ,int event_type ) ;

    /*
     * @brief remove fd watched
     */
    void del_handler(int fd ) ;

    io_handler* get_handler(int fd)  ;

    /*
     * @brief watch events one time , will block msec milliseconds at most
     * @param [in] max milliseconds to wait
     * @return events count
     */
    int run_once(int msec) ;


private:
    epoll_reactor(const epoll_reactor& ) ;
    epoll_reactor& operator=(const epoll_reactor&) ;

private:
    int m_maxfd ;
    int m_epfd ;
    struct epoll_event* m_events ;
    io_handler** m_handlers ;

};

}

#endif /* EPOLL_REACTOR_H_ */
