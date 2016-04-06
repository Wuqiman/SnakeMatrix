cmake_minimum_required(VERSION 3.3)
project(snakeMatrix)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp snakeMatrix.h snakeMatrix.cpp)
add_executable(snakeMatrix ${SOURCE_FILES} snakeMatrix.h snakeMatrix.cpp)