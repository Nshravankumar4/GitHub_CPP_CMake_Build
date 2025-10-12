cmake_minimum_required(VERSION 3.10)
project(CppCICDDemo VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Build main app
add_executable(app
    src/main.cpp
    src/hello.cpp
    src/utils.cpp
)

# Enable CTest
enable_testing()

# Add tests directory
add_subdirectory(tests)
