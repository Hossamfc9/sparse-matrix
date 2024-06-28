cmake_minimum_required(VERSION 3.22)

project(ArrayLinkedList)

add_executable(project main.cpp src/ArrayLinkedList.cpp)
target_include_directories(project PUBLIC include/)