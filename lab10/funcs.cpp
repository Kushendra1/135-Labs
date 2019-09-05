#include "funcs.h"
#include "time.cpp"
#include <iostream>


// Sample function

std::string greet(std::string name){
  return "Hello "+name+"!";
}

int minutesSinceMidnight(Time time){
  int result;
  result = time.h*60 + time.m
  return result;
}

int minutesUntil(Time earlier, Time later){
  int result;
  result = minutesSinceMidnight(later)- minutesSinceMidnight(earlier)
  return result;
}


// Write all your functions in here
