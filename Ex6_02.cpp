// Ex6_02
// Dereferencing pointers
// Calculates the purchase price for a given quantity of items

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::fixed;
using std::setprecision;

int main() {
  int unitPrice{295};
  int count{};
  int discountThreshold{25};
  double discount{0.07};

  int* pcount{&count};

  cout << endl << "Please enter the number of items you want: ";
  cin >> *pcount;
  cout << "The unit price is " << fixed << setprecision(2) << "$"
       << (unitPrice / 100.0) << endl;

  // gross price
  int* punitPrice{&unitPrice};
  int price{*pcount * *punitPrice};
  auto* pprice{&price};

  // net price
  double netPrice{};
  double* pnetPrice{nullptr};
  pnetPrice = &netPrice;

  if (*pcount > discountThreshold) {
    cout << "You qualify for a discount of "
         << static_cast<int>(discount * 100.0) << " percent." << endl;

    *pnetPrice = price * (1 - discount) / 100.0;
  } else {
    netPrice = *pprice / 100.0;
  }

  cout << "The net price for " << *pcount << " items is $" << netPrice << endl
       << endl;

  return 0;
}
