// This program accepts an input of number and orders them from highest to lowest

#include "std_lib_facilities.h"

int main()
{

  cout << "Please enter 3 whole numbers (be sure to press enter after each one):\n";

  int num1 {0};
  int num2 {0};
  int num3 {0};

// ------

  cin >> num1 >> num2 >> num3;

// ------

  if (num1 < num2 && num1 < num3) {
    cout << num1 << ", ";
    if (num2 < num3) {
      cout << num2 << ", " << num3 << "\n";
      // 1 2 3
      return 0;
    }
    else
      cout << num3 << ", " << num2 << "\n";
      // 1 3 2
      return 0;
  } // failure proves num 1 is not smallest

// ------

  if (num1 > num2 && num1 < num3) {
    cout << num2 << ", " << num1 << ", " << num3 << "\n";
    // 2 1 3
    return 0;
  }

  if (num1 < num2 && num1 > num3) {
    cout << num3 << ", " << num1 << ", " << num2 << "\n";
    // 3 1 2
    return 0;
  } // if all the above fails, it proves num1 is largest

// ------

  else if (num2 < num3) {
    cout << num2 << ", " << num3 << ", " << num1 << "\n";
    return 0;
  }
  else
    cout << num3 << ", " << num2 << ", " << num1 << "\n";
  return 0;

}

// ------

// 2 3 1
// 3 2 1

// If 1 > 2, 1 < 3, then one is middle, 2 is smallest

// What if I could evaluate each expression, and record a result in a variable,
// Then depending on what value was in that variable, I could simply cout << x << y << z;

