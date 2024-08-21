cmake_minimum_required(VERSION 3.27.4)
project(RiscVSimulator VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# add_library(csn221 csn221.cpp)
include_directories(include)
file(GLOB SOURCES src/*.cpp)

add_executable(RiscVSimulator ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
