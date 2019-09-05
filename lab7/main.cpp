#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"
/*
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
*/
int main(){
  std::string line;
  int space = 0;
  while(getline(std::cin, line)){
    for (int i = 0; i < space; i++){
      std::cout<<"\t";
    }
    std::cout<<removeLeadingSpaces(line)<<std::endl;
    space+=countChar(line, '{');
    space-=countChar(line, '}');
  }
  return 0;
}
