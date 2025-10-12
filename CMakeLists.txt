cmake_minimum_required(VERSION 3.10)
project(CppCICDDemo VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Main app
add_executable(app
    src/main.cpp
    src/hello.cpp
)
target_include_directories(app PRIVATE include)

# Add tests
add_subdirectory(tests)
