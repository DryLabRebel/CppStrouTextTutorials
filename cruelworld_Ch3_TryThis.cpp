// A simple program designed to examine compiler errors

#include "std_lib_facilities.h"

int main()
{
    string s = "Goodbye, cruel world! ";
    // cout << s << '\n';
    cout << s << "\n";
}

// Note: program does not complain about 'single quotes' around string for cout. Suppose it's only strict about double quotes around actual strings...

