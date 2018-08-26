// Ex6_01.cpp
// The size of pointers

#include <iostream>
using std::cout;
using std::endl;

int main() {
  // Print out the size (in number of bytes) of some data types and the
  // corresponding pointer types:
  cout << sizeof(double) << " > " << sizeof(char) << endl;
  cout << sizeof(double*) << " == " << sizeof(char*) << endl;

  return 0;
}
