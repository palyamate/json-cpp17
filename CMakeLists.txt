cmake_minimum_required(VERSION 3.14)
project(json_cpp17)

set(CMAKE_CXX_STANDARD 17)

add_executable(json_cpp17 main.cpp jsonvar.h json_fwd.h stringifier.h cmake-build-debug/lexer.h)