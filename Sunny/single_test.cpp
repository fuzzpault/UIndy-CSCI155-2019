/* Name: < Fill me in>
   Date: < Fill me in>
   Desc: Unit tests for a singly linked list.
*/
#include "gtest/gtest.h"
#include "singlelinklist.c"


TEST(size, empty){
  node *start = NULL;
  EXPECT_EQ( countnode(start) , 0);
}

TEST(size, one){
  node *start = NULL;
  insert_at_beg(&start, 2);
  EXPECT_EQ( countnode(start) , 1);
  deleteList(&start);
}

TEST(size, two){
  node *start = NULL;
  insert_at_beg(&start, 2);
  insert_at_beg(&start, 3);
  EXPECT_EQ( countnode(start) , 2);
  deleteList(&start);
}

TEST(beg, three){
  node *start = NULL;
  insert_at_beg(&start, 2);
  insert_at_beg(&start, 3);
  insert_at_beg(&start, 4);
  EXPECT_EQ( getLoc(start,0) , 4);
  EXPECT_EQ( getLoc(start,1) , 3);
  EXPECT_EQ( getLoc(start,2) , 2);
  deleteList(&start);
}

TEST(end, three){
  node *start = NULL;
  insert_at_end(&start, 2);
  insert_at_end(&start, 3);
  insert_at_end(&start, 4);
  EXPECT_EQ( getLoc(start,0) , 2);
  EXPECT_EQ( getLoc(start,1) , 3);
  EXPECT_EQ( getLoc(start,2) , 4);
  deleteList(&start);
}