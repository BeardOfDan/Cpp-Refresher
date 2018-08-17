// Ex2_02.cpp
// Converting distances

// NOTES: I had to deviate from the example code:
//        The line 'const unsigned int inches_per_foot{12};' produced the errors:
//          error: default initialization of an object of const type 'const unsigned int'
//          error: expected ';' at end of declaration
//        The line 'unsigned total_inches = {};' produced the error:
//          error: scalar initializer cannot be empty

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  unsigned int yards, feet, inches;

  // Convert a distance in yards, feet, and inches to inches
  cout << "Enter a distance as yards, feet, and inches "
       << "with the three values separated by spaces:" << endl;
  cin >> yards >> feet >> inches;

  const unsigned feet_per_yard = {3};
  const unsigned inches_per_foot = {12};

  unsigned total_inches = {0};
  total_inches = inches + (inches_per_foot * ((yards * feet_per_yard) + feet));

  cout << "The distances corresponds to " << total_inches << " inches." << endl;

  // Convert a distance in inches to yards feet and inches
  cout << "Enter a distance in inches: ";
  cin >> total_inches;

  feet = total_inches / inches_per_foot;
  inches = total_inches % inches_per_foot;
  yards = feet / feet_per_yard;
  feet = feet % feet_per_yard;

  cout << "The distance corresponds to " << yards << " yards " << feet
       << " feet " << inches << " inches." << endl;

  return 0;
}
