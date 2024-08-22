# CMake version
cmake_minimum_required(VERSION 3.27.4)

# Project name and version
project(RiscVSimulator VERSION 0.1.0 LANGUAGES C CXX)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Headers
include_directories(include)

# Source files
set(MAIN_CPP "${PROJECT_SOURCE_DIR}/main.cpp")
file(GLOB SOURCES src/*.cpp)

add_executable(RiscVSimulator ${MAIN_CPP} ${SRC_FILES})

include(CTest)
enable_testing()
