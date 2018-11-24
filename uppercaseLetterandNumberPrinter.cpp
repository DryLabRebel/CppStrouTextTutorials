// This program will print out an integer and a corresponding letter of the alphabet until it reaches the end of the alphabet

#include "std_lib_facilities.h"

int main()
{
    cout << "\n\n\tTable of uppercase letters with their corresponding ASCII integer value below\n\n";
    for(int a = 65; a < 91; ++a)
    {
        char b = a;
        cout << b << "   ";
    }
    cout << "\n\n";
    for(int a = 65; a < 91; ++a)
    {
        cout << a << "  ";
    }
    cout << "\n\n";
    return 0;
}

