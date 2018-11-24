// This program will convert Aus to US and Pound currencies and vice versa

#include "std_lib_facilities.h"

int main()
{
    constexpr double Au {1.29}; // Au = 1US

    constexpr double Ye {106.78}; // Yen = 1US

    double Dollar_value = 1;

    char Dollar_currency = 'o';

    cout << "Welcome to my US/Yen/Aus dollar currency converter.\n";
    cout << "Please enter any dollar value followed by its currency notation.\n";
    cout << "a = Australian dollar. u = US dollar. y = Japanese Yen:\n\n";
    cin >> Dollar_value >> Dollar_currency;

    if (Dollar_currency == 'u') {
        cout << Dollar_value << " American dollars = " << Dollar_value*Au << " Australian Dollars\n";
        cout << "and " << Dollar_value*Ye << " Japanese Yen.\n";
    }

    else if (Dollar_currency == 'a') {
        cout << Dollar_value << " Australian dollars = " << Dollar_value/Au << " US Dollars\n";
        cout << "and " << Dollar_value/Au*Ye << " Japanese Yen.\n";
    }
        
    else if (Dollar_currency == 'y') {
        cout << Dollar_value << " Japanese Yen = " << Dollar_value/Ye << " US Dollars\n";
        cout << "and " << Dollar_value/Ye*Au << " Australian Dollars.\n";
    }
        
    else
    {
    cout << "Sorry, that is an unknown amount. You must be up to mischief! Goodbye!\n";
    return 0;
    }

    cout << "Thank-you I hope you found this useful!\n\n";
    return 0;
}
