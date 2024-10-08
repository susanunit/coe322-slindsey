/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-2022 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** tdd.cxx : example of catch2 main
 ****
 ****************************************************************/
#include <iostream>
using std::cin, std::cout;

#include <limits.h>

double f(int n) { return n*n+1; }

#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>

TEST_CASE( "test that f always returns positive" ) {
  // int n=5;
  int n = -1000;
  REQUIRE( f(n)>0 );  
}

TEST_CASE("Section showcase") {
    std::cout << '1';
    SECTION("A") {
        std::cout << 'A';
    }
    SECTION("B") {
        std::cout << 'B';
    }
    std::cout << '\n';
}
