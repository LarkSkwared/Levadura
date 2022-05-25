#!/bin/sh

export PATH="$PWD/compiler/bin:$PATH"
gcc --version
ld --version

rm -rf build
mkdir build
cd build

cmake -D CMAKE_C_COMPILER=x86_64-pc-linux-gnu-gcc ..
cmake --build .
cmake --install . --prefix=$PWD/Levadura
