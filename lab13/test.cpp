#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  printRange(-2, 10);
  printRange(10, -2);
  printRange(3,7);
  printRange(-12, 3);
  printRange(1,10);
}

TEST_CASE("Task B"){
  // task B tests go here
  CHECK(sumRange(1,3) == 6);
  CHECK(sumRange(-2,10) == 52);
  CHECK(sumRange(-5, 5) == 0);
  CHECK(sumRange(3,7) == 25);
  CHECK(sumRange(-1, -5) == 0);
}

TEST_CASE("Task C"){
  int size = 10;
  int *arr = new int[size]; // allocate array dynamically
  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  CHECK(sumArray(arr, size) == 43); // Add all elements
  CHECK(sumArray(arr, 5) == 34); // Add up first five elements
  CHECK(sumArray(arr, 7) == 46);
  CHECK(sumArray(arr, 2) == 29);
  delete[] arr;
}

TEST_CASE("Task D"){
  CHECK(isAlphanumeric("yo23") == true);
  CHECK(isAlphanumeric("2345678") == true);
  CHECK(isAlphanumeric("iamhere") == true);
  CHECK(isAlphanumeric("") == true);
}

TEST_CASE("Task E"){
  CHECK(nestedParens("()") == true);
  CHECK(nestedParens("((()))") == true);
  CHECK(nestedParens("") == true);
  CHECK(nestedParens("(((") == false);
  CHECK(nestedParens(")(") == false);
}

// etc.
