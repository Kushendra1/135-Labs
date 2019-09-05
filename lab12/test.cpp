#include <iostream>
#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  std::vector<int> answer1;
  answer1.push_back(0);
  answer1.push_back(1);
  answer1.push_back(2);
  answer1.push_back(3);
  answer1.push_back(4);
  CHECK(makeVector(5) == answer1);
  answer1.clear();
  answer1.push_back(0);
  answer1.push_back(1);
  answer1.push_back(2);
  answer1.push_back(3);
  CHECK(makeVector(4) == answer1);
  answer1.clear();
  answer1.push_back(0);
  answer1.push_back(1);
  answer1.push_back(2);
  answer1.push_back(3);
  answer1.push_back(4);
  answer1.push_back(5);
  answer1.push_back(6);
  answer1.push_back(7);
  answer1.push_back(8);
  answer1.push_back(9);
  CHECK(makeVector(10) == answer1);
}

TEST_CASE("Task B"){
  // task B tests go here
  std::vector<int> v{1,2,-1,3,4,-1,6};
  std::vector<int> ans{1,2,3,4,6};
  CHECK(goodVibes(v) == ans);
  std::vector<int> v2{-4,-5,-3,2,3};
  std::vector<int> ans2{2,3};
  CHECK(goodVibes(v2) == ans2);
  std::vector<int> v3{-37,4,52,-123,6};
  std::vector<int> ans3{4,52,6};
  CHECK(goodVibes(v3) == ans3);
  std::vector<int> v4{76,56,45,-3,-67};
  std::vector<int> ans4{76,56,45};
  CHECK(goodVibes(v4) == ans4);
}

TEST_CASE("Task C"){
  //task c tests
  std::vector<int> goku1{1,2,3};
  std::vector<int> vege1{4,5};
  std::vector<int> answer{1,2,3,4,5};
  std::vector<int> empty;
  gogeta(goku1, vege1);
  CHECK(goku1 == answer);
  CHECK(vege1 == empty);
  std::vector<int> goku2{55,56,57};
  std::vector<int> vege2{4,5};
  std::vector<int> answer2{55,56,57,4,5};
  gogeta(goku2, vege2);
  CHECK(goku2 == answer2);
  CHECK(vege2 == empty);
  std::vector<int> goku3{-2,-5,6};
  std::vector<int> vege3{1,-10};
  std::vector<int> answer3{-2,-5,6,1,-10};
  gogeta(goku3, vege3);
  CHECK(goku3 == answer3);
  CHECK(vege3 == empty);
  std::vector<int> goku4{-2,-3,-16};
  std::vector<int> vege4{1,2,3,4};
  std::vector<int> answer4{-2,-3,-16,1,2,3,4};
  gogeta(goku4, vege4);
  CHECK(goku4 == answer4);
  CHECK(vege4 == empty);
}

TEST_CASE("Task D"){
  //task d tests
  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};
  std::vector<int> sum1{5,7,3};
  std::vector<int> check1 = sumPairWise(v1, v2);
  CHECK(check1 == sum1);
  std::vector<int> v3{4,5};
  std::vector<int> v4{1,2,3};
  std::vector<int> check2 = sumPairWise(v3, v4);
  CHECK(check2 == sum1);
  std::vector<int> v5{1,2,3,4,5};
  std::vector<int> v6{6,7,8,9,10};
  std::vector<int> sum2{7,9,11,13,15};
  std::vector<int> check3 = sumPairWise(v5, v6);
  CHECK(check3 == sum2);
  std::vector<int> v7{2,4,6,8};
  std::vector<int> v8{3,5,7};
  std::vector<int> sum3{5,9,13,8};
  std::vector<int> check4 = sumPairWise(v7, v8);
  CHECK(check4 == sum3);
}

// etc.
