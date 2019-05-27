cmake_minimum_required(VERSION 3.14)
project(MovieSubtitles)

set(CMAKE_CXX_STANDARD 17)

add_executable(MovieSubtitles main.cpp MovieSubtitles.cpp MovieSubtitles.h Exceptions.cpp Exceptions.h)