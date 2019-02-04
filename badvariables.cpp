// This program just initializes some illegal, and bad variables to examine the errors by the compiler

#include "std_lib_facilities.h"

int main()
{
  string 2words {"two words"};
  // clang knows this is an illegal variable name
  int no*symbols {45};
  // interesting, clang interprets this as an equation
  int for {20};
  // seems to recognise this as a bad ID too.
} 
