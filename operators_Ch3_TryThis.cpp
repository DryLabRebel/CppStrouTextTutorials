// Practise learning about operators

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a floating point value:\n";
    double n = 0;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << n*3
        << "\ntwice n == " << n*2
        << "\nn squared == " << n*n
        << "\nhalf n == " << n/2
        << "\nsquare root of n == " << sqrt(n) << "\n";
    return 0;
}
