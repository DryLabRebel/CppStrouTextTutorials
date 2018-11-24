// This program will print out an integer and a corresponding letter of the alphabet until it reaches the end of the alphabet

#include "std_lib_facilities.h"

int main()
{
    for(int a = 97; a < 123; ++a)
    {
        char b = a;
        cout << a << "\t" << b << "\n";
    }
    return 0;
}

