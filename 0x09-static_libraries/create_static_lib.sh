#!/bin/bash
gcc -wall -pedantic -werror -wextre  -c *.c
ar rc lipall.a *.o
