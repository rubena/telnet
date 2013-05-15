#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

#include <signal.h>

#define PORT 5555
#define MAX_MSG_LENGTH 1024
#define END_STRING "chau\n"
#define COMPLETE_STRING "fin-respuesta"

#ifndef MSG_NOSIGNAL
#define MSG_NOSIGNAL SO_NOSIGPIPE
#endif

#define perro(x) {fprintf(stderr, "%s:%d: %s: %s\n", __FILE__, __LINE__, x, strerror(errno));exit(1);}
