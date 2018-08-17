// Ex5_02.cpp
// Obtaining the number of array elements
#include <iostream>
using std::cout;
using std::endl;

#include <array>
using std::size;

int main() {
  int values[]{2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

  cout << "There are " << (sizeof(values) / sizeof(values[0]))
       << " elements in the array." << endl;

  int sum{};
  {  // limiting the scope of count
    const int count{size(values)};
    for (size_t i{}; i < count; i++) {
      sum += values[i];
    }
  }
  cout << "The sum of the elements is " << sum << endl;

  return 0;
}
