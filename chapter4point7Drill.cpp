#include "std_lib_facilities.h"

int main()
{
    double First{0.0};
    double Second{0.0};

    cout << "Welcome. Please enter one number, press enter, then enter another number, then press enter (enter '|' to exit the program):\n";

    while(cin >> First && cin >> Second)
    {
        cout << "The values you have entered are:\n" << First << " and " << Second << ".\n";

        if(First > Second)

        {
            cout << First << " is larger than " << Second << ".\n";
        }

        else if(Second == First)

            cout << Second << " and " << First << "are equal.\n";

        else

            cout << Second << " is larger than " << First << ".\n";

        cout << "Please enter another two numbers, and press enter after each (enter '|' to exit the program):\n";

// Include a comparison that tells when the numbers are close together if they are are <= 0.01 different

    }

    return 0;
}

// Something's wrong. As soon as I type pipe, or any other non integer, it starts printing the last instance of the while loop infinitely
// This is the first program that's really hit me in the willy's. What is going on?
//
// Modify the program, such that:
// It returns an error when not an int or double
// It exits *only* when '|' is pressed and not just any old character
//        if (cin.fail())
//        {
//            cout << "\n\nERROR -- You did not enter an integer!! Please try again!\n\n";
//            // get rid of failure state
//            cin.clear();
//            // discard 'bad' character(s)
//            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//         }

