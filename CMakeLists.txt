cmake_minimum_required(VERSION 3.17)
project(random)

set(CMAKE_CXX_STANDARD 17)

add_executable(random main.cpp src/Random.cpp src/Random.h src/utils.h)