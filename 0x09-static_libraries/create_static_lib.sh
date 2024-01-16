#!/bin/bash

# Compile all C files in the current directory into object files
gcc -c ./*.c 

# Create the static library liball.a from the object files
ar rc liball.a ./*.o
