// This program will convert a value from miles to kilometers

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter any number in miles, to convert into kilometers:\n";
    double Miles {0};
    cin >> Miles;
    cout << "The value you enter was " << Miles << " miles.\n";
    double Kilometers {0};
    Kilometers = Miles*1.609;
    cout << "This equals: " << Kilometers << " kilometers.\n";

    return 0;
}
