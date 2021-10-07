#include <iostream>

int main(){
  char c = '0';
  std::string s = "Cat :3 Dog";
  // Initialize char and test case.
  for(int i = 0; i < s.length(); i++){
    c = s[i];
    std::cout << c << " " << int(c) << "\n";
  } // Loops through s, sets c to s[i] and prints out the characters with their ASCII codes. 

  return 0;
}
