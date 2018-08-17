#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const double PI = 3.141592653589793;
  int radius = 0;

  cout << "Please enter the radius (integer) of a circle..." << endl;

  cin >> radius;

  const double area = PI * radius * radius;

  cout << "The area is " << area << endl;

  return 0;
}
