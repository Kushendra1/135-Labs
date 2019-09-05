/*
Author: Kushendra Ramrup
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 1

A program that asks the use to input two integers and it outputs the
smaller one.
*/

#include <iostream>

int smaller(int a, int b)
{
  std::cin >> a,b;
  if (a < b){
    return a;
  } else {
    return b;;
  }
}

int smaller3(int a, int b, int c)
{
  std::cin >> a,b,c;
  if(a <= b && a <= c){
        return a;
    } else if(b <= a && b <= c){
        return b;
    } else if(c <= a && c <= b){
        return c;
    }
}
