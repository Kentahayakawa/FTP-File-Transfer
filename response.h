#ifndef RECV_CTRL_SOCKET_H_
#define RECV_CTRL_SOCKET_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>

#include <basics.h>
#include <passive.h>
#include <recv_ctrl_socket.h>
#include <commands.h>

char recv_response(int sockfd);

#endif