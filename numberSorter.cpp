// This program accepts an input of number and orders them from highest to lowest

#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter 3 whole numbers (be sure to press enter after each one):\n";

  int num1 {0};
  int num2 {0};
  int num3 {0};

  cin >> num1 >> num2 >> num3;

  if (num1 < num2 && num1 < num3) {
    cout << num1 << ", ";
    if (num2 < num3) {
      cout << num2 << ", " << num3 << "\n";
    else
      cout << num3 << ", " << num2 << "\n";
      
  }
  if (num2 < num3) {
    cout << num2 << ", " << num3 << ", " << num1 << "\n";
    return 0;
  }
  else
    cout << num3 << ", " << num2 << ", " << num1 << "\n";
  return 0;

// -----

  if (num2 < num3) {
    cout << num2 << ", " << num3 << "\n";
    return 0;
  }
  else
    cout << num3 << ", " << num2 << "\n";
  return 0;
}

// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1


