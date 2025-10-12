# Enable CTest
enable_testing()

# -------------------------------------------------------------
# Test for hello.cpp
# -------------------------------------------------------------
add_executable(test_hello
    test_hello.cpp
)
target_link_libraries(test_hello PRIVATE app_sources)
add_test(NAME HelloTest COMMAND test_hello)

# -------------------------------------------------------------
# Test for utils.cpp
# -------------------------------------------------------------
add_executable(test_utils
    test_utils.cpp
)
target_link_libraries(test_utils PRIVATE app_sources)
add_test(NAME UtilsTest COMMAND test_utils)
ctest_sleep()