// This very simple program will the print the remainder of a division

#include "std_lib_facilities.h"

int main()
{

    int num1 {0};
    int num2 {0};
    cout << "Please enter two whole numbers:\n";

    cin >> num1;
    cin >> num2;

    int Remain {0};
    Remain = num1 % num2;

    cout << "\n" << Remain << "\n";

    return 0;
}
