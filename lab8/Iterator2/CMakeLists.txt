cmake_minimum_required(VERSION 3.14)
project(Iterator2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Iterator2 main.cpp Vector.cpp Vector.h Iterator.cpp Iterator.h)