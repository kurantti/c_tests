cmake_minimum_required(VERSION 3.27)
project(Exercise_Files)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        app_testing
        Chap02/working.cpp)

include_directories("/usr/local/Cellar/fmt/10.2.1_1/include")
