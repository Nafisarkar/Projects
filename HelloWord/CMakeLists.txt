cmake_minimum_required(VERSION 3.25)
project(HelloWord)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HelloWord
        main.cpp)
