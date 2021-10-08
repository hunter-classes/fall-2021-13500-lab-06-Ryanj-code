#include <iostream>
#include <cctype>
#include "caesar.h"

char upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char shiftChar(char c, int rshift){
  if(!isalpha(c)){
    return c;
  }

  char result = '0';
  int pos = 0;

  for(int i = 0; i < 26; i++){
    if(isupper(c) && c == upper[i]){
      result = upper[i];
      pos = i;

      if(pos + rshift > 25){
	pos = pos - 26;
      }

      result = upper[pos + rshift];

    }
    else if(c == lower[i]){
      result = lower[i];
      pos = i;

      if(pos + rshift > 25){
	pos = pos - 26;
      }

      result = lower[pos + rshift];

    }
  }

  return result;
}

std::string encryptCaesar(std::string plaintext, int rshift){
  std::string result = "";

  for(int i = 0; i < plaintext.length(); i++){
    result += shiftChar(plaintext[i], rshift);
  }

  return result;
}
