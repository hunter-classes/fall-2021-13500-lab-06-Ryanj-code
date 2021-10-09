/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 6
This program contains the Decryption functions for Caesar Cipher and Vigenere Cipher.
*/

#include <iostream>
#include <cctype>

char upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
// Creating arrays with lower and upper case alphabets.

char reverseCaesar(char c, int rshift){
  if(!isalpha(c)){
    return c;
  } // Returns c if c is not an alphabet.

  int x = c - rshift;
  // Sets x to c - rshift(It is possible to add char and int as the ASCII value of the char is used).
  if(isupper(c)){
    if(x < 65){
      x += 26;
    }
  } // If c is an uppercase alphabet, and the x is less than 65(65 - 90 is range of uppercase on ASCII table), add 26.
  else if(x < 97) {
    x += 26;
  } // Else, if x is less than 97(97 - 122 is range of lowercase on ASCII table), add 26.

  return x;
}

int count = 0;

char reverseVigenere(char c, std::string keyword){
  if(!isalpha(c)){
    return c;
  } // Returns c if c is not an alphabet.

  if(count == keyword.length()){
    count = 0;
  } // If count equal to the length of keyword set count to 0 to reset looping through keyword.

  int shift = 0;

  for(int i = 0; i < 26; i++){
    if(keyword[count] == lower[i] || keyword[count] == upper[i]){
      shift = i;
    }
  } // Loop through to find the shift based on the current index of keyword.

  int x = c - shift;
  // Sets x to c - rshift(It is possible to add char and int as the ASCII value of the char is used).
  if(isupper(c)){
    if(x < 65){
      x += 26;
    }
  } // If c is an uppercase alphabet, and the x is less than 65(65 - 90 is range of uppercase on ASCII table), add 26.
  else if(x < 97) {
    x += 26;
  } // Else, if x is less than 97(97 - 122 is range of lowercase on ASCII table), add 26.

  count++;
  return x;
} // Increment count and return x disguised as a char based on ASCII table.

std::string decryptCaesar(std::string ciphertext, int rshift){
  std::string s = "";
  for(int i = 0; i < ciphertext.length(); i++){
    s += reverseCaesar(ciphertext[i], rshift);
  } // Loops through plaintext, and uses the shiftChar function to shift the entire string.

  return s;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
  std::string s = "";
  for(int i = 0; i < ciphertext.length(); i++){
    s += reverseVigenere(ciphertext[i], keyword);
  } // Loops through plaintext, and uses the reverseVigenere function to shift the entire string.

  count = 0;
  return s;
} // Sets count to 0 and returns s.
