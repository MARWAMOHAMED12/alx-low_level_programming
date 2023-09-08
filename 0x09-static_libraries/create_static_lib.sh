#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcs lipall.a *.o
