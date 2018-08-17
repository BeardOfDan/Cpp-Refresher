// Ex5_04.cpp
// Multiple initializations in a loop expression
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
  unsigned int limit{};

  cout << "This program calculates n! and the sum of the integers"
       << " up to n for values 1 to limit.\n";
  cout << "What upper limit for n would you like? ";
  cin >> limit;

  // Output column headings
  cout << setw(8) << "integer" << setw(8) << " sum" << setw(20) << " factorial"
       << endl;

  for (unsigned long long n{1}, sum{}, factorial{1}; n <= limit; ++n) {
    sum += n;
    factorial *= n;
    cout << setw(8) << n << setw(8) << sum << setw(20) << factorial << endl;
  }

  return 0;
}
