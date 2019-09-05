#include "funcs.h"
#include <iostream>
#include <string>
#include <cctype>


// Sample function

// std::string greet(std::string name){
//   return "Hello "+name+"!";
// }

void test_ascii(std::string sentence) {
  int length = sentence.length();
  for (int i = 0; i < length; i++) {
     std::cout << sentence[i] << " " << (int)sentence[i] << "\n";
  }
}


  char shiftChar(char c, int rightShift){
    if(!isalpha(c)){
      return c;
    }
    char result = c + rightShift;
    if(!isalpha(result)){
      result-=26;
    }
    if(c<91&&result>90){
      result-=26;
    }
    return result;
  }

  //This method encrypts the function
  std::string encryptCaesar(std::string text, int rightShift){
    std::string result = "";
    for (int i = 0; i < text.length(); i++){
      result += shiftChar(text[i], rightShift);
    }
    return result;
  }



std::string encryptVigenre(std::string text, std::string keyword) {
  int count = 0;
  std::string result = "";
  int length = text.length();
  for (int i = 0; i < length; i++) {
    while (!isalpha(text[i]) && i < length) {
      result = result + text[i];
      i++;
    }
    if (i < length) {
      result = result + shiftChar(text[i], ((int)keyword[count]) - 97);
      count++;
      if( count == keyword.length()) {
        count = 0;
      }
    }
  }
  return result;
}

char shiftLeft(char c, int lshift){
  if (!isalpha(c)){
    return c;
  }
  char result = c - lshift;
  if(!isalpha(result)){
    result += 26;
  }
  if(c>96&&result<97){
    result += 26;
  }
  return result;
}


//function fo encryption shift
char shiftRight(char c, int rightShift){
  if(!isalpha(c)){
    return c;
  }
  char result = c + rightShift;
  if(!isalpha(result)){
    result-=26;
  }
  if(c<91&&result>90){
    result-=26;
  }
  return result;
}

//function to decrypt caesar
std::string decryptCaesar(std::string text, int rshift){
  std::string result = "";
  for (int i = 0; i < text.length(); i++){
    result += shiftLeft(text[i], rshift);
  }
  return result;
}

//function to dycrypt Vigenre
std::string decryptVigenere(std::string text, std::string key){
  int index = 0;
  std::string result = "";
  for (int i = 0; i < text.length(); i++){
    while(!isalpha(text[i]) && i < text.length()){
      result += text[i];
      i++;
    }
    if(i<text.length()){
      result+=shiftLeft(text[i],((int)key[index])-97);
      index++;
      if(index == key.length()){
        index = 0;
      }
    }
  }
  return result;
}


// Write all your functions in here
