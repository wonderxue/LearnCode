cmake_minimum_required(VERSION 3.5.1)
project(DAY1)
add_definitions(-Wall)
#set(CMAKE_BUILD_TYPE "Debug")
add_compile_options(-fexec-charset=GBK)
set(PROJECT_BINARY_DIR build)
set(SRC_LIST day27.cpp)
add_executable(DAY27 ${SRC_LIST})