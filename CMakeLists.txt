cmake_minimum_required(VERSION 3.10)
project(CppCICDDemo VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Create an object library for shared source files
add_library(app_sources OBJECT
    src/hello.cpp       # shared source
    src/utils.cpp       # shared source
)

# Include headers for the library
target_include_directories(app_sources PUBLIC include)

# Main app executable
add_executable(app
    src/main.cpp        # main application
)

# Link shared object files to main app
target_link_libraries(app PRIVATE app_sources)

# Include tests directory
add_subdirectory(tests)
