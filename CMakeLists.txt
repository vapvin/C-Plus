cmake_minimum_required(VERSION 3.15)
project(Cpp)

set(CMAKE_CXX_FLAGS "-fexec-charset=CP949")

add_executable(Cpp main.cpp friend.cpp)