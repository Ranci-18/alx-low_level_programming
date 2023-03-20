#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -wl,-soname,liball.so -o liball.so
