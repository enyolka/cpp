cmake_minimum_required(VERSION 3.14)
project(RepositoryT)

set(CMAKE_CXX_STANDARD 17)

add_executable(RepositoryT main.cpp Repository.cpp Repository.h Student.cpp Student.h Query.cpp Query.h)