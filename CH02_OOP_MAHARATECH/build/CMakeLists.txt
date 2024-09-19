
# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(CH01_EX01_CMake VERSION 1.0.0 LANGUAGES C CXX)

# Include the testing module by CMake
# include(test)
# enable_testing()

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(CH01_EX01_CMake ../src/main.cpp ../src/Complex/Complex.cpp)

# Include directories
target_include_directories(CH01_EX01_CMake PRIVATE ../include/Complex)
