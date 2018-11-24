// This program will print out an integer and a corresponding square of that integer

#include "std_lib_facilities.h"

int main()
{
    for(int a = 1; a <= 20; ++a)
    {
        int b = a*a;
        cout << a << "\t" << b << "\n";
    }
    return 0;
}

