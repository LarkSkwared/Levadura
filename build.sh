#!/bin/sh

rm -rf build
mkdir build
cd build

cmake ..
cmake --build .
cmake --install . --prefix=$PWD/Levadura
