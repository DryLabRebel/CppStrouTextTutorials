// This is the first example if statement in Chapter 4 of Stroustrups beginner programming text using c++

#include "std_lib_facilities.h"

int main() 
{

  int a = 0;
  int b = 0;

  cout << "Please enter two integers:\n";

  cin >> a >> b;

  if (a<b) {

    cout << "max(" << a << "," << b << ") is " << b << "\n";
    return 0;

  } else {

    cout << "max(" << a << "," << b << ") is " << a << "\n";
    return 0;

  }

return 0;

}

