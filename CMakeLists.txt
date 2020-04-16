cmake_minimum_required(VERSION 3.15)
project(CppReviews)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppReviews ifstream.cpp parameters.cpp Pointers.cpp stringpointers.cpp)
add_executable(temp temp.cpp)
add_executable(ifstream ifstream.cpp)
add_executable(parameters parameters.cpp)
add_executable(Pointers Pointers.cpp)
add_executable(stringpointers stringpointers.cpp)
