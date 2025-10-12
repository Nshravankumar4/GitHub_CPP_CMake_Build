# Enable CTest for running tests
enable_testing()

# Add test executable
# Note: We only include test files here. The source files should be linked, not compiled twice.
add_executable(runTests
    test_hello.cpp       # your original test file
    test_utils.cpp       # new test file for utils.cpp
)

# Include headers
target_include_directories(runTests PRIVATE ../include)

# Link the actual source files to avoid multiple definitions
target_link_libraries(runTests PRIVATE ../src/hello.cpp ../src/utils.cpp)

# Register the test with CTest
add_test(NAME HelloTest COMMAND runTests)  # register the executable as a test
