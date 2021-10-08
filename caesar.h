/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 6
This is the header file for the Caesar functions.
*/

#pragma once
#include <iostream>

char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
