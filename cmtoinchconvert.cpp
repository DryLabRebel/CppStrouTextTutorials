// This program converts cm to inches and inches to cm

#include "std_lib_facilities.h"

int main() {

  constexpr double cm_per_inch {2.54};
  double initial {1};
  double final {0};
  char unit {'e'};

  cout << "\nWelcome, this is a program for converting between inches, and centimeters.\n\n";
  cout << "Please enter any integer, then press return, then enter the unit of your integer, 'i' for inches or 'c' for centimeters\nthen press return:\n\n";

  cin >> initial >> unit;

  if (unit == 'c') {

    final = initial*cm_per_inch;

    cout << "\nYour value = " << final << " inches.\n";
    cout << "Thanks for using the cm to inch converter.\n";
    cout << "See you nexttime...\n\nYa dickhead!\n\n";

    return 0;

  } else if (unit == 'i') {

    final = initial/cm_per_inch;

    cout << "\\\nnnYour value = " << final << " centimeters.\n";
    cout << "Thanks for using the cm to inch converter.\n";
    cout << "See you nexttime...\n\nYa dickhead!\n\n";

    return 0;

  } else if (unit == 'e') {

    cout << "\nYou dickhead!...\n\n";
    cout << "You forgot to enter the units!\n";

    return 0;

  } else {

    cout << "What the hell is going on... you're playing silly buggers!\n";

    return 0;

  }

}


