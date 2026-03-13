cmake_minimum_required(VERSION 4.1)
project(hackerGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(hackerGame main.cpp
        Command.cpp
        Command.hpp
        FileCommands.cpp
        FileCommands.hpp
        Filesystem.cpp
        Filesystem.hpp
        System.cpp
        System.hpp)
