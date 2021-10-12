/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 6
This contains Task A, which prints out the ascii values of a string next to each of the character.
*/

#include <iostream>
#include <string>

void testingAscii(std::string s){
  char c = '0';
  // Initialize char.
  for(int i = 0; i < s.length(); i++){
    c = s[i];
    std::cout << c << " " << int(c) << "\n";
  } // Loops through s, sets c to s[i] and prints out the characters with their ASCII codes. 
}
 
int main(){
  std::string test1 = "Cat :3 Dog";
  testingAscii(test1);
  std::cout << "\n";
  // Test case 1.
  std::string test2 = "Hello World!";
  testingAscii(test2);
  std::cout << std::endl;
  // Test case 2.
  return 0;
}
