cmake_minimum_required(VERSION 3.29)
project(Prosit3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Prosit3 main.cpp
        Polygone.cpp
        Polygone.h
        Cercle.cpp
        Cercle.h
        Rectangle.cpp
        Rectangle.h
        Triangle.cpp
        Triangle.h)
