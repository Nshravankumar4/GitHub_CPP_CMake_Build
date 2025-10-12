#include "hello.h"
#include <gtest/gtest.h>

class HelloTest : public ::testing::Test {};

TEST_F(HelloTest, MessageTest) {
    EXPECT_EQ(getMessage(), "Hello from CI/CD C++ project!");
}
