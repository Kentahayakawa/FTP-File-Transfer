
#ifndef ACTIVE_H_
#define ACTIVE_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>

#include <basics.h>
#include <commands.h>
#include <recv_ctrl_socket.h>

char create_ad_socket (int sockfd);
char AD_to_server (int sockfd,char* tIP, short unsigned int port);

#endif