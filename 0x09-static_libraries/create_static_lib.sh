#!/bin/bash
gcc -wall -pedantic -werror -wextre  -c *.c
ar -rcs lipall.a *.o
