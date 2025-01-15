
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "my_lib.hpp"

using namespace testing;

TEST(mdst, test_2)
{
    EXPECT_EQ(my_func(7), 49);
    ASSERT_THAT(my_func(0), Eq(0));
}
