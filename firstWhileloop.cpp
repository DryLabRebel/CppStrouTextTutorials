// This program will print out an integer and a corresponding letter of the alphabet until it reaches the end of the alphabet

#include "std_lib_facilities.h"

int main()
{

// 'b' is char('a'+1) 'c' is char('b'+2)
// Need to be able to increment the letters of the alphabet
// a = 97

    int a = 97;

    while(a<123)
    {
        // converts a to char, prints a and b
        char b = a;
        cout << a << "\t" << b << "\n";
        ++a;
    }
    return 0;
}

