#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

// add your tests here

TEST_CASE("Task B: Caesar Cipher Encryption:"){
  SUBCASE("Normal Cases:"){
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("Ryan Jiang", 15) == "Gnpc Yxpcv");
  }


  SUBCASE("Special Cases:"){
    CHECK(encryptCaesar("@?#$%^", 7) == "@?#$%^");
    CHECK(encryptCaesar("987654321", 11) == "987654321");
  }
}
