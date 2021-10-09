#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

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

TEST_CASE("Task C: Vigenere Cipher Encryption:"){
  SUBCASE("Normal Cases:"){
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Vigenere Cipher", "cplusplus") == "Xxryftcy Ukesyj");
    CHECK(encryptVigenere("Daedalus", "coding") == "Fohlnrwg");
  }

  SUBCASE("Special Cases:"){
    CHECK(encryptVigenere("<>{}[]", "hello") == "<>{}[]");
    CHECK(encryptVigenere("123456789", "number") == "123456789");
  }
}

TEST_CASE("Task D: Decryption:"){
  SUBCASE("Normal Cases:"){
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("Fohlnrwg", "coding") == "Daedalus");
  }

  SUBCASE("Special Cases:"){
    CHECK(decryptCaesar("13579", 7) == "13579");
    CHECK(decryptCaesar(">><<..,,", 4) == ">><<..,,");
    CHECK(decryptVigenere("24680", "num") == "24680");
    CHECK(decryptVigenere("--++**==", "weird") == "--++**==");
  }
}


