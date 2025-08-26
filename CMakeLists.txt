cmake_minimum_required(VERSION 4.0)
project(RandomNumberBuilder_v3)

set(CMAKE_CXX_STANDARD 20)

add_executable(RandomNumberBuilder_v3 main.cpp
        dictionary.cpp
        dictionary.h
        Debug.h
        Settings.h)
