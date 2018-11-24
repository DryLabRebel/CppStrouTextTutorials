// This program will test to see if the integer presented is even or odd

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter any whole number and press enter:\n";
    int evenORodd {0};
    cin >> evenORodd;
    int leftOver {0};
    leftOver = evenORodd % 2; //leftOver takes the remainder of evenORodd divided by two

    if (evenORodd == 0) {
        cout << "You entered " << evenORodd << ". Zero is an even number\n";
        return 0;
    }

    if (leftOver == 0) {
        cout << "The number " << evenORodd << " is an even number.\n\n";
        return 0;
    }
    else {
        cout  << "The number " << evenORodd << " is an odd number.\n\n";
    }

    return 0;

}

