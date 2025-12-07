cmake_minimum_required(VERSION 3.10)
project(CppCICDDemo VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build objects for reuse in the app and tests
add_library(app_sources OBJECT
  src/hello.cpp
  src/utils.cpp
)
target_include_directories(app_sources PUBLIC include)
target_compile_features(app_sources PUBLIC cxx_std_17)

a_dd_executable_placeholder
add_executable(app
  src/main.cpp
  $<TARGET_OBJECTS:app_sources>
)
target_include_directories(app PUBLIC include)
target_compile_features(app PUBLIC cxx_std_17)

enable_testing()
add_subdirectory(tests)