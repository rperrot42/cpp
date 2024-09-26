cmake_minimum_required(VERSION 3.28)
project(ex00)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex00
        Zombie.cpp
        Zombie.hpp
        newZombie.cpp
        randomChump.cpp
        main.cpp)
