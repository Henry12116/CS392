/*
 * sockets.h
 *
 * Communication between a server and several clients
 * using sockets
 *
 */

#ifndef _SOCKETS_H_
#define _SOCKETS_H_
#define BUFFER_SIZE 512

#include "my.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <signal.h>
#include <netdb.h>

int sockfd;

struct s_gl_env {
	int sockfd;
	int pid;
} gl_env;

#endif