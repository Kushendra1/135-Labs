#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"

#include "doctest.h"

// Write test cases here
TEST_CASE("Task A"){

     std::cout << "----------- TASK A - rect ----------\n";
     std::string result = rect(5,3);
     std::cout << " rect(5,3):\n";
     std::cout << result;
     std::cout << " rect(3,5):\n";
     result = rect(3,5);
     std::cout << result;
     std::cout << "\n\n";
}

TEST_CASE("Task B"){


  std::cout << "----------- TASK B - checker ----------\n";
  std::string result2 = checker(4,6);
  std::cout << " checker(4,6):\n";
  std::cout << result2;
  std::cout << " checker(6,5):\n";
  result2 = checker(6,5);
  std::cout << result2;
  std::cout << "\n\n";
}

TEST_CASE("Task C"){


  std::cout << "----------- TASK C - cross ----------\n";
  std::string result3 = cross(8);
  std::cout << " cross(8):\n";
  std::cout << result3;
  std::cout << " cross(6):\n";
  result3 = cross(6);
  std::cout << result3;
  std::cout << "\n\n";
}

TEST_CASE("Task D"){


  std::cout << "----------- TASK D - lower_triangle ----------\n";
  std::string result4 = lower_triangle(6);
  std::cout << " lower_triangle(6):\n";
  std::cout << result4;
  std::cout << " lower_triangle(5):\n";
  result4 = lower_triangle(5);
  std::cout << result4;
  std::cout << "\n\n";
}

TEST_CASE("Task E"){


  std::cout << "----------- TASK E - upper_triangle ----------\n";
  std::string result5 = upper_triangle(6);
  std::cout << " upper_triangle(6):\n";
  std::cout << result5;
  std::cout << " upper_triangle(5):\n";
  result5 = upper_triangle(5);
  std::cout << result5;
  std::cout << "\n\n";
}

TEST_CASE("Task F"){


  std::cout << "----------- TASK F - trapezoid ----------\n";
  std::string result6 = trapezoid(12,5);
  std::cout << " trapezoid(12,5):\n";
  std::cout << result6;
  std::cout << " trapezoid(12,7):\n";
  result6 = trapezoid(12,7);
  std::cout << result6;
  std::cout << "\n\n";
}

TEST_CASE("Task G"){


  std::cout << "----------- TASK G - big_check ----------\n";
  std::string result7 = big_check(16,11);
  std::cout << " big_check(16,11):\n";
  std::cout << result7;
  std::cout << " big_check(27,27):\n";
  result7 = big_check(27,27);
  std::cout << result7;
  std::cout << "\n\n";
}

// etc.
