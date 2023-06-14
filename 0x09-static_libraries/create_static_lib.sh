#!/bin/bash
gcc -c -Wall -Werror -Wextra -L. *.c
ar -rcs liball.a *.o
