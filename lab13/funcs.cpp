#include "funcs.h"
#include <iostream>


// Sample function

std::string greet(std::string name){
  return "Hello "+name+"!";
}

void printRange(int left, int right){
  if (right + 1 > left) {
    std::cout << left << " ";

    printRange(left + 1, right);
  }
  else if (left > right) {
    return;
  }
}

int sumRange(int left, int right){
  if (right + 1 > left) {
    int sum;
    sum = left + sumRange(left + 1, right);
  }
  else if(left > right) {
    int sum = 0;
    return sum;
  }
}

int sumArray(int *arr, int size){
	return sumArrayInRange(arr, 0, size - 1);
}

int sumArrayInRange(int *arr, int left, int right){
	int sum = 0;

	if (left <= right){
		sum = arr[left] + sumArrayInRange(arr, left + 1, right);
	}

	return sum;
}

bool isAlphanumeric(std::string s){
  if (s == ""){
    return true;
  }
  else {
		return (isalnum(s[0]) != 0) && isAlphanumeric(s.substr(1, s.length()));
	}
}

bool nestedParens(std::string s) {
  if (s.length() == 0){
    return true;
  }

  return (s[0] == '(' && s[s.length() - 1] == ')') && nestedParens(s.substr(1, s.length() - 2));
}

// Write all your functions in here
