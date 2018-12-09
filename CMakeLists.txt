cmake_minimum_required(VERSION 3.13)
project(pj2)

set(CMAKE_CXX_STANDARD 14)

add_executable(pj2 main.cpp robot.h observador.h buffer.h Source.h Process.h)