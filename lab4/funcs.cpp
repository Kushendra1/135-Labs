#include "funcs.h"
#include <iostream>


// Sample function

std::string rect(int width, int height) {
  std:: string result = "";
  for (int j = 0; j < height; j++ ){
    for (int i = 0; i < width; i ++ ){
      result += "*";
    }
    result += "\n";
  }
  return result;
}

std::string checker(int width, int height) {
  std:: string result = "";

  for (int i = 0; i < height; i++){
    if (i%2 ==0) {
      for (int i = 0; i < (width + 1) / 2; i++){
        result += "* ";
      }
      result += "\n";
    }
    else {
      for (int i = 0; i < width / 2; i++) {
        result += " *";
      }
      result += "\n";
    }
  }
	return result;
}

std::string cross(int size) {
  std::string result = "";

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if(i == j || j == ((size - 1) - i )){
        result += "*";
      }
      else {
        result += " ";
      }
    }
    result += "\n";
  }
  return result;
}

std::string lower_triangle(int width) {
  std::string result="";

  for(int i = 0; i <=width-1; i++) {
    for (int j = 0; j <=i; j++) {
      result += "*";
    }
    result += "\n";
  }
  return result;
}

std::string upper_triangle(int width) {
  std::string result="";

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < width; j ++) {
      if (j<i) {
        result+= " ";
      }
      else {
        result+= "*";
      }
    }
    result+= "\n";
  }
  return result;
}

std::string trapezoid(int width, int height) {
  std::string result="";
  int stars = width;
  int space = 0;

  if ((width+1)/2 >= height) {
    for (int i = 0; i < height; i ++) {
      for (int k = 0; k < space; k++) {
        result+= " ";
      }
      for (int k = 0; k < stars; k++) {
        result+= "*";
      }
      for (int k = 0; k < space; k++) {
        result+= " ";
      }
      stars -= 2;
      space += 1;
      result+= "\n";
    }
  }
  else {
    std::cout << "Impossible Shape!" << "\n";
  }
  return result;
}

std::string big_check(int width, int height) {
  std::string result="";
  int space = 0;
  int star = 0;
  bool z = false;
  int count = 0;

  for(int i = 0; i < height; i++){
    for(int j = 0; j < width; j++){
      if(!z){
        if(star < 3){
          result+= "*";
          star++;
        }
        else{
          result+= " ";
          space++;
          if(space == 3) {
            star = 0;
            space = 0;
          }
        }
      }
      else{
        if(space < 3){
          result+= " ";
          space++;
        }
        else{
          result+= "*";
          star++;
          if(star == 3){
            star = 0;
            space = 0;
          }
        }
      }
    }
    star = 0; 
    space = 0;
    result+= "\n";
    count++;
    if(count == 3){
      if(z){
        z = false;
      }
      else{
        z = true;
      }
      count = 0;
    }
  }
  return result;
}

// Write all your functions in here
