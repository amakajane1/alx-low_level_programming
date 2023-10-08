#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -c *.c

# Create a static library named liball.a from all .o files
ar rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up: remove .o files
rm -f *.o

