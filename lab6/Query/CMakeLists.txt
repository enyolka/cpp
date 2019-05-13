cmake_minimum_required(VERSION 3.14)
project(Query)

set(CMAKE_CXX_STANDARD 17)

add_executable(Query main.cpp Query.cpp Query.h Student.cpp Student.h StudentRepository.cpp StudentRepository.h)