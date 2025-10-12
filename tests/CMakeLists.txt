# Enable CTest for running tests
enable_testing()

# Add test executable
add_executable(runTests
    test_hello.cpp       # your original test file
    test_utils.cpp       # new test file for utils.cpp
    ../src/hello.cpp     # include original source file
    ../src/utils.cpp     # include new source file for tests
)

# Include headers
target_include_directories(runTests PRIVATE ../include)

# Register the test with CTest
add_test(NAME HelloTest COMMAND runTests)  # register the executable as a test
