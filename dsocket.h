#ifndef DSOCKET_H_
#define DSOCKET_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>

#include <basics.h>
#include <passive.h>
#include <response.h>
#include <commands.h>

char create_pasv_dsocket (int sockfd);
char recv_pasv_info(int sockfd, char *buffer);


#endif