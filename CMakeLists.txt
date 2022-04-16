cmake_minimum_required(VERSION 3.16)
project(CppDesignPattern)

set(CMAKE_CXX_STANDARD 14)

# 头文件
include_directories(${PROJECT_SOURCE_DIR}/src/)
include_directories(${PROJECT_SOURCE_DIR}/src/DecoratorPattern)
include_directories(${PROJECT_SOURCE_DIR}/src/AdapterPattern)

add_subdirectory(src/)
