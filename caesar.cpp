/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 6
This program contains the Caesar Cipher functions.
*/

#include <iostream>
#include <cctype>
#include "caesar.h"

char shiftChar(char c, int rshift){
  if(!isalpha(c)){
    return c;
  } // Returns c if c is not an alphabet.

  int x = c + rshift;
  // Sets x to c + rshift(It is possible to add char and int as the ASCII value of the char is used).
  if(isupper(c) && x > 90) {
    x -= 26;
  } // If c is an uppercase alphabet, and the x is greater than 90(65 - 90 is range of uppercase on ASCII table), subtract 26.
  else if(x > 122) {
    x -= 26; 
  } // Else, if x is greater than 122(97 - 122 is range of lowercase on ASCII table), subtract 26.
  
  return x;
}

std::string encryptCaesar(std::string plaintext, int rshift){
  std::string result = "";

  for(int i = 0; i < plaintext.length(); i++){
    result += shiftChar(plaintext[i], rshift);
  } // Loops through plaintext, and uses the shiftChar function to shift the entire string.

  return result;
}
