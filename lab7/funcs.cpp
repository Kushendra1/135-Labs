#include "funcs.h"
#include <iostream>
#include <cctype>

std::string removeLeadingSpaces(std::string line){
  std::string output;
  bool a = false;
  for(int i = 0; i < line.length(); i++){
    if (!isspace(line[i])){
      a = true;
    }
    if (a){
      output += line[i];
    }
  }
  return output;
}

int countChar(std::string line, char c) {
  int count = 0;
  for (int i = 0; i < line.length(); i++) {
    if (line[i]==c) {
      count ++;
    }
  }
  return count;
}
