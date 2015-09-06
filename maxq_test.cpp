/*
g++ maxq_test.cpp maxq.cpp /usr/lib/libgtest.a -std=c++11 -lpthread -o mtest
*/
#include <gtest/gtest.h>
#include "maxq.h"
#include <stdio.h>

TEST(MaxqTest, MAXQ_GETMAX){
  maxq mq;
  printf("mq.getmax()=%d\n", mq.getmax());
  EXPECT_EQ(1, mq.getmax());
  mq.push(7);
  EXPECT_EQ(7, mq.getmax());
  mq.push(3);
  EXPECT_EQ(7, mq.getmax());
  mq.push(2);
  EXPECT_EQ(7, mq.getmax());
  mq.push(5);
  EXPECT_EQ(7, mq.getmax());
  mq.pop();
  EXPECT_EQ(5, mq.getmax());
  SUCCEED();
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
