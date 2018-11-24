// This program takes two numbers, then outputs a series of results based on the two numbers given

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter any number: \n";
    double Random_number1 {0};
    cin >> Random_number1;
    cout << "Please enter one more number: \n";
    double Random_number2 {0};
    cin >> Random_number2;
    // Smaller
    if (Random_number1 > Random_number2)
        cout << "The smallest of these two numbers is: " << Random_number2 << ".\n" << Random_number1 << " is the largest.\n";
    else
        if (Random_number1 < Random_number2)
            cout << "The smallest of these two numbers is: " << Random_number1 << ".\n" << Random_number2 << " is the largest.\n";
        else
            cout << "The two numbers are the same.\n";
    // Sum
    cout << Random_number1+Random_number2 << " is the sum of the two numbers.\n";
    // Difference
    cout << Random_number1-Random_number2 << " is the difference between " << Random_number1 << " and " << Random_number2 << ".\n";
    // Product
    cout << Random_number1*Random_number2 << " is the product of the two numbers.\n";

    return 0;
}
