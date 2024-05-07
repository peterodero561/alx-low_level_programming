#!/bin/bash
# creates a library out of all c files present in current directory

# compile all .c files to objects
gcc -c -fPIC *.c

#create the dynamic library
gcc -shared -o liball.so *.o

# clean object files
rm *.o
