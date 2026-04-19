cmake_minimum_required(VERSION 3.10)

# Project name and versioning
project(TrustIssues VERSION 1.0)

# Enforce C++17 standard for modern features
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Point to header files directory
include_directories(include)

# Gather all source files from the src directory
file(GLOB SOURCES "src/*.cpp")

# Build the executable using the project name
add_executable(${PROJECT_NAME} ${SOURCES})