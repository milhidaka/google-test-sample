#include <gtest/gtest.h>
#include "../src/core/pure.hpp"

TEST(TestTwice, DoTwice) {
    EXPECT_EQ(6, twice(3));
    EXPECT_EQ(-10, twice(-5));
}
