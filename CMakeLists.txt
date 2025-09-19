cmake_minimum_required(VERSION 4.0)
project(FightSim)

set(CMAKE_CXX_STANDARD 20)

add_executable(fightSim main.cpp
        Character.h
        Character.cpp
)