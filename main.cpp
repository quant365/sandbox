/*
g++ main.cpp maxq.cpp /usr/lib/libgtest.a -std=c++11 -lpthread -o main
*/
#include "maxq.h"
#include <stdio.h>

int main(int argc, char **argv) {
    maxq mq;
    printf("mq.getmax()=%d\n", mq.getmax());
    return 0;
}
