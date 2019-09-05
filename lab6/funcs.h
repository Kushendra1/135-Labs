#pragma once

#include <iostream>


// sample signature
void test_ascii(std::string sentence);
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
std::string encryptVigenre(std::string text, std::string keyword);
char shiftLeft(char c, int lshift);
char shiftRight(char c, int rightShift);
std::string decryptCaesar(std::string text, int rshift);
std::string decryptVigenere(std::string text, std::string key);

// Write your function signatures / prototypes here
