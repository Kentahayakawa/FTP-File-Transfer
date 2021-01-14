#ifndef BASICS_H_
#define BASICS_H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>

#include <commands.h>
#include <response.h>

char create_socket (char* tIP, char* port);
char ftp_authenticat (int sockfd) ;
char terminate_socket (int sockfd);


#endif