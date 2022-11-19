cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(smallestnet_tests VERSION 0.1.0)
enable_language(CUDA)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


include(CTest)

enable_testing()

include_directories("./net/include")

add_executable(smallestnet_tests 
net/src/Engine.cpp
net/src/EngineCUDA.cpp
net/src/EngineSerial.cpp
net/src/Matrix.cpp
tests/tester.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
