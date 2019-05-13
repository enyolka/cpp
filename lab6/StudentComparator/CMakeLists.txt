cmake_minimum_required(VERSION 3.14)
project(StudentComparator)

set(CMAKE_CXX_STANDARD 17)

add_executable(StudentComparator main.cpp StudentComparator.cpp StudentComparator.h Student.cpp Student.h StudentRepository.cpp StudentRepository.h)