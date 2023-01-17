#!/bin/bash
gcc -wall -wextra -werror -padantic -c -fpic *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY.$LD_LIBRARY_PATH
