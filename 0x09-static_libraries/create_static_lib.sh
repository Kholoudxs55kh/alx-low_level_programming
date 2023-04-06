#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
ar -t liball.a
nm liball.a
ranlib liball.a
