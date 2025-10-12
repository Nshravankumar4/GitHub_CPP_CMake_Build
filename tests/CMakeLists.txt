# Enable CTest
enable_testing()

# Add test executable
add_executable(runTests
    test_hello.cpp       # your test file
    ../src/hello.cpp     # include source file
)

# Include headers
target_include_directories(runTests PRIVATE ../include)

# Register the test with CTest
add_test(NAME HelloTest COMMAND runTests)
