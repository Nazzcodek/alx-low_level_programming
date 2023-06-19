#!/bin/bash

c_files=$(find . -maxdepth 1 -type f -name "*.c")

gcc -shared -o liball.so ${c_files}
