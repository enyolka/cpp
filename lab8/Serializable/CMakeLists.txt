cmake_minimum_required(VERSION 3.14)
project(Serializable)

set(CMAKE_CXX_STANDARD 17)

add_executable(Serializable main.cpp Serializer.cpp Serializer.h Academia.cpp Academia.h)