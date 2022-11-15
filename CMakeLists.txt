cmake_minimum_required(VERSION 3.21)
project(Apollen)

set(CMAKE_CXX_STANDARD 14)

add_executable(Apollen main.cpp cmake-build-debug/Lab2.cpp cmake-build-debug/Lab3.cpp "Lab 3.cpp" "Lab 2.cpp" BitStuffing.cpp BitStuffing.h)
