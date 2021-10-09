#pragma once
#include <iostream>

char reverseCaesar(char c, int rshift);
std::string decryptCaesar(std::string ciphertext, int rshift);
char reverseVigenere(char c, std::string keyword);
std::string decryptVigenere(std::string ciphertext, std::string keyword);
