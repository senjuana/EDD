cmake_minimum_required(VERSION 3.5)
project(pila)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    imple_pila.cpp
    main.cpp
    pila.h)

add_executable(pila ${SOURCE_FILES})