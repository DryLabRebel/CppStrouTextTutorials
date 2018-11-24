// This program accepts an input of number and orders them from highest to lowest

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter 3 random words (be sure to press enter after each one):\n";

    string word1 {"zilch"};
    string word2 {"zilch"};
    string word3 {"zilch"};

    cin >> word1 >> word2 >> word3;

    if (word1 < word2 && word1 < word3) {
        cout << word1 << ", ";
    }
    else if (word2 < word3) {
            cout << word2 << ", " << word3 << ", " << word1 << "\n";
            return 0;
    }
    else
            cout << word3 << ", " << word2 << ", " << word1 << "\n";
            return 0;
    if (word2 < word3) {
        cout << word2 << ", " << word3 << "\n";
        return 0;
    }
    else
        cout << word3 << ", " << word2 << "\n";
        return 0;
}
