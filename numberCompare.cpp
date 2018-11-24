// This program takes two numbers, then outputs a series of results based on the two numbers given

#include "std_lib_facilities.h"

int main()
{
    int Random_number1 {0};
    int Random_number2 {0};

    cout << "Please enter any whole number: \n";
    cin >> Random_number1;

    cout << "Please enter one more whole number: \n";
    cin >> Random_number2;

    // Smaller
    if (Random_number1 > Random_number2)
        cout << "The smallest of these two numbers is: " << Random_number2 << ".\n" << Random_number1 << " is the largest.\n";
    else
        cout << "The smallest of these two numbers is: " << Random_number1 << ".\n" << Random_number2 << " is the largest.\n";
    // Sum
    cout << Random_number1+Random_number2 << " is the sum of the two numbers.\n";
    // Difference
    cout << Random_number1-Random_number2 << " is the difference between the two numbers.\n";
    // Product
    cout << Random_number1*Random_number2 << " is the product of the two numbers.\n";

    return 0;
}
