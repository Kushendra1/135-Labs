/*
Author: Kushendra Ramrup
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 1

A program that asks the use to input the year and month and it outputs the
number of days in the month.
*/

#include <iostream>

int month(int value1, int value2)
{
  if (value1%4 == 0 && value2 == 2){
    return 29;
  } else if (value1%4 != 0 && value2 == 2){
    return 28;
  } else if (value1%400 == 0 && value2 == 2){
    return 29;
  }else if (value1%400 != 0 && value2 == 2){
    return 28;
  }else if (value2 == 1 || value2 == 3 || value2 == 5 || value2 == 7 || value2 == 8 || value2 == 10 || value2 == 12){
    return 31;
  } else if (value2 == 4 || value2 == 6 || value2 == 9 || value2 == 11){
    return 30;
  }
}

int leap(int year)
{
  if (year%4 != 0){
    std::cout << "Common Year" << std::endl;
  } else if (year%100 != 0) {
    std::cout << "Leap Year" << std::endl;
  } else if (year%400 != 0) {
    std::cout << "Common Year" << std::endl;
  } else {
    std::cout << "Leap Year" << std::endl;
  }
}
