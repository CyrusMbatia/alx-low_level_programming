#!/bin/bash
cc -fPIC -c *.c
gcc -shared -o liball.so *.o
