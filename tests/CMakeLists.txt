enable_testing()

# Shared object library (no multiple definition issues)
add_library(app_sources OBJECT
    ../src/hello.cpp
    ../src/utils.cpp
)
target_include_directories(app_sources PUBLIC ../include)

# First test
add_executable(test_hello test_hello.cpp)
target_link_libraries(test_hello PRIVATE app_sources)
add_test(NAME HelloTest COMMAND test_hello)

# Second test
add_executable(test_utils test_utils.cpp)
target_link_libraries(test_utils PRIVATE app_sources)
add_test(NAME UtilsTest COMMAND test_utils)
