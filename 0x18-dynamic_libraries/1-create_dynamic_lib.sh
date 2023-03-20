#!/bin/bash
gcc -fpic -c *.c
gcc -shared -wl,-soname,liball.so -o liball.so *.o
