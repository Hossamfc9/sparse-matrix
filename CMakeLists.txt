cmake_minimum_required(VERSION 3.22)

project(Matrix)

set(imp_files src/ArrayLinkedList.cpp src/SparseMatrix.cpp)

add_executable(Matrix main.cpp ${imp_files})
target_include_directories(Matrix PUBLIC include/)