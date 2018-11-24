// read and write a first name 
// Need to fix if statements... see errors on compile

#include "std_lib_facilities.h"

int main() {

    string first_name {"no_name"}; // first_name is a variable of type string 
    string child1 {"jack"};
    string child2 {"hannah"};
    char child1_sex {0};
    char child2_sex {0};
    int child1_age {0};
    int child2_age {0};

    cout << "Please enter the name of the person you want to write to and press enter:\n"; 
    cin >> first_name; // read characters into first_name

    cout << "\nNow please enter the name of one of the persons children:\n";
    cin >> child1;
    cout << "\nAge:\n";
    cin >> child1_age;
    cout << "\nAnd Sex (m or f):\n";
    cin >> child1_sex;
    cout << "\nNow please enter the name of another of the persons children:\n";
    cin >> child2;
    cout << "\nAge:\n";
    cin >> child2_age;
    cout << "\nAnd Sex (m or f):\n";
    cin >> child2_sex;

    cout << "\n    To my beautiful wife " << first_name << ",\n";
    cout << "\n";
    cout << "I love you so much more than I probably let on. I shudder to think how much less of a man I would be if I didn't have you in my life.\n";
    cout << "You are amazing to me. I don't appreciate the effort you put in to raising ";
    cout << child1 << " and " << child2 << ".\n";
    cout << "Nor the things I wouldn't know if I didn't have you.\n";
    cout << "Like being tough when it comes to sleep training, and when to start feeding them solids\n";
    cout << "These are not as trivial as they sound. The fact is I'd be lost without you.\n";
    cout << "\n";
    cout << "I hope " << child1 << " our ";
    if (child1_sex == 'm') 
        cout << "little man has your ability to concentrate and remember stuff.\n";
    else 
        cout << "little lady has your smile, courage and confidence.\n";
    cout << "And I hope our ";
    if (child2_sex == 'f') 
        cout << "little lady has your smile, courage and confidence.\n";
    else 
        cout << "little man has your ability to concentrate and remember stuff.\n";
    cout << "\n";
    child1_age++;
    cout << "I know that " << child1 << " will be turning " << child1_age << " this year.\n";
    cout << "I am just so happy watching ";
    if (child1_sex == 'm') 
        cout << "him grow.\n";
    else
        cout << "her grow.\n";
    cout << "I love you with all my heart.\n";
    cout << "\n";
    cout << "Sincerely,\nYour husband Geoff\n";

    return 0;

}

