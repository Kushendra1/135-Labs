#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"

#include "doctest.h"

// TEST_CASE("Sample tests"){
//   std::string result;
//   result=greet("Tom");
//
//   CHECK(result.compare("Hello Tom!")==0);
//
// }

// Write test cases here
TEST_CASE("Task A"){
  bool result;
  result=isDivisibleBy(100,25);
  CHECK(result==true);

  result=isDivisibleBy(35,17);
  CHECK(result==false);

  result=isDivisibleBy(72,2);
  CHECK(result==true);

  result=isDivisibleBy(75,4);
  CHECK(result==false);
}

TEST_CASE("Task B"){
  bool result;
  result=isPrime(7);
  CHECK(result==true);

  result=isPrime(20);
  CHECK(result==false);

  result=isPrime(47);
  CHECK(result==true);

  result=isPrime(10);
  CHECK(result==false);

  result=isPrime(222);
  CHECK(result==false);
}

TEST_CASE("Task C"){
  int result;
  result=nextPrime(14);
  CHECK(result==17);

  result=nextPrime(17);
  CHECK(result==19);

  result=nextPrime(20);
  CHECK(result==23);

  result=nextPrime(225);
  CHECK(result==227);
}

TEST_CASE("Task D"){
  int result;
  result=countPrimes(4,9);
  CHECK(result==2);

  result=countPrimes(15,27);
  CHECK(result==3);

  result=countPrimes(3,50);
  CHECK(result==13);

  result=countPrimes(50,100);
  CHECK(result==10);
}

TEST_CASE("Task E") {
  bool result;
  result=isTwinPrime(17);
  CHECK(result==true);

  result=isTwinPrime(5);
  CHECK(result==true);

  result=isTwinPrime(4);
  CHECK(result==false);

  result=isTwinPrime(12);
  CHECK(result==false);

  result=isTwinPrime(18);
  CHECK(result==false);
}

TEST_CASE("Task G") {
  int result;
  result=nextTwinPrime(5);
  CHECK(result==7);

  result=nextTwinPrime(11);
  CHECK(result==13);

  result=nextTwinPrime(29);
  CHECK(result==31);

  result=nextTwinPrime(17);
  CHECK(result==19);

  result=nextTwinPrime(3);
  CHECK(result==5);
}

TEST_CASE("Task F") {
  int result;
  result=largestTwinPrime(5,18);
  CHECK(result==17);

  result=largestTwinPrime(1,31);
  CHECK(result==31);

  result=largestTwinPrime(14,16);
  CHECK(result==-1);
}
// etc.
