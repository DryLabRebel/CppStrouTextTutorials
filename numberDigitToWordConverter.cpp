// This program converts number digits between 1-5 into their respective english words and back again

#include "std_lib_facilities.h"

int main()
{
    string InputValue {"zero"};
    int OutputValue {0};
    cout << "Please enter a number between 1 and 5 in word form:\n";
    cin >> InputValue;

    if (InputValue == "one") {
        OutputValue = 1;
        cout << "That word is equivalent to " << OutputValue << ".\n";
        return 0;
    }
    
    else if (InputValue == "two") {
        OutputValue = 2;
        cout << "That word is equivalent to " << OutputValue << ".\n";
        return 0;
    }
    
    else if (InputValue == "three") {
        OutputValue = 3;
        cout << "That word is equivalent to " << OutputValue << ".\n";
        return 0;
    }
    
    else if (InputValue == "four") {
        OutputValue = 4;
        cout << "That word is equivalent to " << OutputValue << ".\n";
        return 0;
    }
    
    else if (InputValue == "five") {
        OutputValue = 5;
        cout << "That word is equivalent to " << OutputValue << ".\n";
        return 0;
    }
    else
        cout << "Unrecognized number!\n";
    return 0;
}
    

// Definitely don't need the int variable. could just print the phraze with the number. But including the int seems more general, and precise.

