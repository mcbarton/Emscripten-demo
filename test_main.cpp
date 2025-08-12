#include <gtest/gtest.h>
#include "code.h"

TEST(Multiple, Double_Number) {
  EXPECT_EQ(double_number(2), 4);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
