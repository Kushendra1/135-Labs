/*
Author: Kushendra Ramrup
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Lab 2A

Write a program that  asks the user to input an integer in the
range 0 < n < 100 and then square it. If the number is out of range, the program
should keep asking to re-enter until a valid number is input.
*/

#include <iostream>
#include <cmath>

int main ()
{
  int a;
  int input;
  std::cout << "Please enter an integer: " << std::endl;
  std::cin >> input;
  while (a < 100)
  {
    if (0 < input && input < 100)
    {
      input = input*input;
      std::cout << "Number squared is " << input << std::endl;
      a = a + 100;
    } else {
      std::cout << "Please Re-enter: " << std::endl;
      std::cin >> input;
      a = a + 1;
    }
  }
  return 0;
}
