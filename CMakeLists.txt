cmake_minimum_required(VERSION 3.10)
project(CppCICDDemo VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# -------------------------------------------------------------
# Shared object library for source files
# -------------------------------------------------------------
add_library(app_sources OBJECT
    src/hello.cpp
    src/utils.cpp
)
target_include_directories(app_sources PUBLIC include)

# -------------------------------------------------------------
# Main app executable
# -------------------------------------------------------------
add_executable(app
    src/main.cpp
)
target_link_libraries(app PRIVATE app_sources)

# -------------------------------------------------------------
# Include the tests directory
# -------------------------------------------------------------
add_subdirectory(tests)
