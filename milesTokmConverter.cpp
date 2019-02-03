// This program will convert a value from miles to kilometers

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter any number in miles, to convert into kilometers:\n";
    double Miles {0};
    double conversion {1.609};
    cin >> Miles;
    cout << "You entered: " << Miles << " miles.\n";
    double Kilometers {0};
    Kilometers = Miles*conversion;
    cout << "This equals: " << Kilometers << " kilometers.\n";

    return 0;
}
