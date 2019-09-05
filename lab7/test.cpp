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
  CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
  CHECK(removeLeadingSpaces("    int y = 32;") == "int y = 32;");
  CHECK(removeLeadingSpaces(" double mat  =  13") == "double mat  =  13");
}

TEST_CASE("Task B"){
  CHECK(countChar("character {",'{') == 1);
  CHECK(countChar("These are just words", 's') == 3);
  CHECK(countChar("closed curlies }", '}') == 1);
}

// etc.
