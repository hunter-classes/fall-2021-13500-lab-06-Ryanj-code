/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 6
This program contains the Vigenere Cipher functions.
*/

#include <iostream>
#include <cctype>

char up[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char low[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
// Creating arrays with lower and upper case alphabets.
int counts = 0;

char shiftChar(char c, std::string keyword){
  if(!isalpha(c)){
    return c;
  } // Returns c if c is not an alphabet.

  if(counts == keyword.length()){
    counts = 0;
  } // If counts equal to the length of keyword set counts to 0 to reset looping through keyword.

  int shift = 0;

  for(int i = 0; i < 26; i++){
    if(keyword[counts] == low[i] || keyword[counts] == up[i]){
      shift = i;
    }
  } // Loop through to find the shift based on the current index of keyword.

  int x = c + shift;
  // Sets x to c + rshift (It is possible to add char and int as the ASCII value of the char is used).
  if(isupper(c) && x > 90) {
    x -= 26;
  } // If c is an uppercase alphabet, and the x is greater than 90(65 - 90 is range of uppercase on ASCII table), subtract 26.
  else if(x > 122) {
    x -= 26;
  } // Else, if x is greater than 122(97 - 122 is range of lowercase on ASCII table), subtract 26.

  counts++;
  return x;
} // Increment count and return x disguised as a char based on ASCII table.

std::string encryptVigenere(std::string plaintext, std::string keyword){
  std::string s = "";

  for(int i = 0; i < plaintext.length(); i++){
    s += shiftChar(plaintext[i], keyword);
  } // Loops through plaintext, and uses the shiftChar function to shift the entire string.

  counts = 0;
  return s;
} // Sets counts to 0 and returns s.

