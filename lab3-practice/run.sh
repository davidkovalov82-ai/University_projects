#!/usr/bin/env bash
set -e

cmake -S . -B build
cmake --build build
./build/lab3-practice