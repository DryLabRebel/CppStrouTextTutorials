// Program that asks simply for a persons name and their age
// This will freak them out by out putting their name and multiplying their age by 12

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and your age:\n";
    string name = "???"; // Inserting an initial value allows the output to provide a result, even if the input fails
    double age = 0; // Inserting an initial value allows the output to provide a result, even if the input fails
    cin >> name >> age;
    cout << "Hi there, " << name << " (age: " << age << ")\n\n";
    age *= 12;
    cout << "Your age multiplied by 12 = " << age << "!\n\n";
    return 0;
}

