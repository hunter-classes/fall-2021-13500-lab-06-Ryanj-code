#include <iostream>
#include <cctype>
#include "caesar.h"

char shiftChar(char c, int rshift){
  if(!isalpha(c)){
    return c;
  }

  int x = c + rshift;

	if(isupper(c) && x > 90) {
		x -= 26;
	}
  else if(x > 122) {
		x -= 26;
	} 
	
	return x;
}

std::string encryptCaesar(std::string plaintext, int rshift){
  std::string result = "";

  for(int i = 0; i < plaintext.length(); i++){
    result += shiftChar(plaintext[i], rshift);
  }

  return result;
}
