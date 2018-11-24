// Program that asks simply for a persons name and their age

#include "std_lib_facilities.h"

int main()
{
    string previous = " ";
    string current; // Has this been intialized?? - How do we initialize it then?
    while(cin>>current) {
        if (previous == current)
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}


