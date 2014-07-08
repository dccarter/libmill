/* Wed Jul 09 01:00:43 +0200 2014:
   This file was generated by mill from stdmill.mh */

#include "mill.h"

#ifndef stdmill_h_included
#define stdmill_h_included

extern const struct mill_type mill_type_msleep;

void *mill_call_msleep (
    void *cf,
    const struct mill_type *type,
    struct mill_loop *loop,
    void *parent,
    int *rc,
    int milliseconds);

void msleep (
    int *rc, 
    int milliseconds);

struct tcpsocket {
    uv_tcp_t s;
    uv_loop_t *loop;
    int pc;

    /* Handle of the receive coroutine currently being executed on this
       socket. Also any socket-scoped asynchronous operations such as connect,
       accept or term. */
    void *recvcfptr;

    /* Handle of the send coroutine currently being executed on this socket. */
    void *sendcfptr;
};

int tcpsocket_init (
    struct tcpsocket *self,
    struct mill_loop *loop);

extern const struct mill_type mill_type_tcpsocket_term;

void *mill_call_tcpsocket_term (
    void *cf,
    const struct mill_type *type,
    struct mill_loop *loop,
    void *parent,
    struct tcpsocket * self);

void tcpsocket_term (
    struct tcpsocket * self);

int tcpsocket_bind (
    struct tcpsocket *self,
    struct sockaddr *addr,
    int flags);

int tcpsocket_listen (
    struct tcpsocket *self,
    int backlog);

extern const struct mill_type mill_type_tcpsocket_connect;

void *mill_call_tcpsocket_connect (
    void *cf,
    const struct mill_type *type,
    struct mill_loop *loop,
    void *parent,
    int *rc,
    struct tcpsocket * self,
    struct sockaddr * addr);

void tcpsocket_connect (
    int *rc, 
    struct tcpsocket * self, 
    struct sockaddr * addr);

extern const struct mill_type mill_type_tcpsocket_accept;

void *mill_call_tcpsocket_accept (
    void *cf,
    const struct mill_type *type,
    struct mill_loop *loop,
    void *parent,
    int *rc,
    struct tcpsocket * self,
    struct tcpsocket * newsock);

void tcpsocket_accept (
    int *rc, 
    struct tcpsocket * self, 
    struct tcpsocket * newsock);

extern const struct mill_type mill_type_tcpsocket_send;

void *mill_call_tcpsocket_send (
    void *cf,
    const struct mill_type *type,
    struct mill_loop *loop,
    void *parent,
    int *rc,
    struct tcpsocket * self,
    const void * buf,
    size_t len);

void tcpsocket_send (
    int *rc, 
    struct tcpsocket * self, 
    const void * buf, 
    size_t len);

extern const struct mill_type mill_type_tcpsocket_recv;

void *mill_call_tcpsocket_recv (
    void *cf,
    const struct mill_type *type,
    struct mill_loop *loop,
    void *parent,
    int *rc,
    struct tcpsocket * self,
    void * buf,
    size_t len);

void tcpsocket_recv (
    int *rc, 
    struct tcpsocket * self, 
    void * buf, 
    size_t len);

#endif

