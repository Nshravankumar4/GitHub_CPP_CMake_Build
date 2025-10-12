# Enable CTest for running tests
enable_testing()

# Add test executable
add_executable(runTests
    test_hello.cpp      # original test
    test_utils.cpp      # new test
)

# Include headers
target_include_directories(runTests PRIVATE ../include)

# Link shared object files to test executable
target_link_libraries(runTests PRIVATE app_sources)

# Register the test with CTest
add_test(NAME HelloTest COMMAND runTests)
