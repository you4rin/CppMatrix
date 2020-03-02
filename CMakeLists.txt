# CMake version
cmake_minimum_required(VERSION 3.8.2 FATAL_ERROR)

# C++ standard
set(CMAKE_CXX_STANDARD 17)

# Declare Project
project(CppMatrix)

# Set output directories
set(DEFAULT_CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

include_directories(Includes)
add_subdirectory(Sources/CppMatrix)