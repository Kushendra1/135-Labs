#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"
#include "time.cpp"

// Write test cases here
TEST_CASE("Task A"){
  CHECK(minutesSinceMidnight({6, 30}) = 390);
  CHECK(minutesSinceMidnight({10, 00}) = 600);
  CHECK(minutesSinceMidnight({12, 15}) = 735);
  CHECK(minutesUntil({10, 30}, {13, 40}) = 190);
  CHECK(minutesUntil({6, 00}, {12, 00}) = 360);
  CHECK(minutesUntil({5, 30}, {14, 30}) = 540);
  // task A tests go here
}

TEST_CASE("Task B"){
  // task B tests go here
}

// etc.
