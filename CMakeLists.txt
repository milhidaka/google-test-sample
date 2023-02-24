cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(gtsample)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(gtsample ${SOURCES})
set_property(TARGET gtsample PROPERTY CXX_STANDARD 14)
