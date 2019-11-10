# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.0)

# Name of the project
project(add)

# Add a library to this build. The name of the library is MyLibrary and it
# consists of only the MyLibrary.cpp file
add_library(add add/add.cpp)