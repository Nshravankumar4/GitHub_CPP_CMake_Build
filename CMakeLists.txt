cmake_minimum_required(VERSION 3.10)
project(CppCICDDemo VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include header files
include_directories(include)

# Add executable target
add_executable(app
    src/main.cpp
    src/hello.cpp
)
