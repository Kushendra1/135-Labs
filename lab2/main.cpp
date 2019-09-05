/*
Author: Kushendra Ramrup
Course: CSCI-133
Instructor: Mike amansky
Assignment: Lab 2B-D
*/

#include <iostream>

void print_interval(int start, int stop)
{
  for(int i = start; i < stop; i++)
  {
    //int size = stop - start;
    //int numbers[size];
    //numbers[0] = i;
    //cout << numbers << endl;
    std::cout << i << " " ;
  }
}

int change(int array[], int index, int value)
{
  for (int z = 0; z < 10; z++)
  {
    array[index] = value;
  }
  for (int z = 0; z < 10; z++)
  {
    std::cout << array[z] << " " ;
  }
  for(int i = 0; i < 10; i++)
  {
    array[i] = 1;
  }
}

void fib()
{
  int fib[60];
  int first = 0;
  int second = 1;
  int sum = 0;
  for (int i = 0; i < 60; i++)
  {
    std::cout << first << ", ";
    sum = first + second;
    first = second;
    second = sum;
  }
}

int main ()
{
  print_interval(-5, 10);
  std::cout << " " << std::endl;
  int myData[10];
  int newindex;
  int newvalue;

  for(int i = 0; i < 10; i++)
  {
    myData[i] = 1;
  }
  for(int i = 0; i < 10; i++)
  {
    std::cout << myData[i] << " " ;
  }
  std::cout << " " << std::endl;
  change(myData, 3, 20);
  std::cout << " " << std::endl;
  change(myData, 4, 30);
  std::cout << " " << std::endl;
  change(myData, 5, 40);
  std::cout << " " << std::endl;
  fib();
  return 0;
}
