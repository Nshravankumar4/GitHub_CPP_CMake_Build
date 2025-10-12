#include "utils.h"
#include <gtest/gtest.h>

class UtilsTest : public ::testing::Test {};

TEST_F(UtilsTest, AddTest) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST_F(UtilsTest, GreetTest) {
    // Just check greet runs without crashing
    greet();
}
