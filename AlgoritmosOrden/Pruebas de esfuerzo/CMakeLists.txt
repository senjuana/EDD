cmake_minimum_required(VERSION 3.5)
project(practica4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp algoritmos.cpp arbol.cpp arbol.h algoritmos.h)
add_executable(practica4 ${SOURCE_FILES})