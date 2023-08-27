#ifndef WEB_BENCH_H_
#define WEB_BENCH_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <getopt.h>
#include <rpc/types.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <iostream>


void ParseArg(int argc, char* argv[]);
void BuildRequest(const char* url);
void WebBench();



#endif