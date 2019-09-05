#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

// Write test cases here
TEST_CASE("Task A"){
  test_ascii("Cat :3 Dog");
  test_ascii("ascii");
  test_ascii("Giants SB champs 2020");
}

TEST_CASE("Task B"){


  encryptCaesar("Way to Go", 5);
  encryptCaesar("Hello World", 3);

  encryptVigenre("Hello World", "cake");
  encryptVigenre("Tom is here", "cake");

  decryptCaesar("F Qnlmy-Djfw Fufwy", 5);
  decryptVigenere("Jevpq, Wyvnd", "cake");
}

// etc.
