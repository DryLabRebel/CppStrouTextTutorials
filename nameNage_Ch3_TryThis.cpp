// Program that asks simply for a persons name and their age

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and your age:\n";
    string name = "???";
    double age = 0;
    cin >> name >> age;
    age *= 12;
    cout << "Hi there, " << name << " (age: " << age << ")\n";
    return 0;
}

