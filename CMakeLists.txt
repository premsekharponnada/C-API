# cmake -H. -Bbuild
# cmake --build build

cmake_minimum_required(VERSION 3.20.3)
set(CMAKE_CXX_STANDARD 11)
project(cppAPI)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
add_executable(helloworldtest ${PROJECT_SOURCE_DIR}/test/helloworldtest.cpp)