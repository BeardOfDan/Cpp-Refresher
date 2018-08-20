// Ex5_15

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::fixed;
using std::setprecision;
using std::setw;

#include <vector>
using std::vector;

int main() {
  vector<double> x;

  while (true) {
    double input{};
    cout << "Please enter a non-zero value, or 0 (to exit): ";
    cin >> input;
    cout << endl;

    if (input == 0) {
      break;
    }

    x.push_back(input);
  }

  if (x.empty()) {
    cout << "Nothing to sort..." << endl;
    return 0;
  }

  cout << "Starting sort..." << endl;

  while (true) {
    bool swapped{false};
    const int size = x.size() - 1;

    for (size_t i{}; i < size; ++i) {
      if (x[i] > x[i + 1]) {
        const auto temp = x[i];
        x[i] = x[i + 1];
        x[i + 1] = temp;
        swapped = true;
      }
    }

    if (!swapped) {
      break;
    }
  }

  cout << "Your data is now in ascending order: " << endl
       << fixed << setprecision(1);

  const size_t perline{10};
  size_t n{};

  for (size_t i; i < x.size(); i++) {
    cout << setw(8) << x[i];
    if (++n == perline) {
      cout << endl;
      n = 0;
    }
  }

  cout << endl;
  return 0;
}
