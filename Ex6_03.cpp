// Ex6_03
// Initializing pointers with strings

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const char* pstar1{"Fatty Arbuckle"};
  const char* pstar2{"Clara Bow"};
  const char* pstar3{"Lassie"};
  const char* pstar4{"Slim Pickens"};
  const char* pstar5{"Boris Karloff"};
  const char* pstar6{"Mae West"};
  const char* pstar7{"Oliver Hardy"};
  const char* pstar8{"Greta Garbo"};
  const char* pstr{"Your lucky star is "};

  cout << "Pick a lucky star! Enter a number between 1 and 8: ";
  size_t choice{};
  cin >> choice;

  switch (choice) {
    case 1:
      cout << pstr << pstar1 << endl;
      break;
    case 2:
      cout << pstr << pstar2 << endl;
      break;
    case 3:
      cout << pstr << pstar3 << endl;
      break;
    case 4:
      cout << pstr << pstar4 << endl;
      break;
    case 5:
      cout << pstr << pstar5 << endl;
      break;
    case 6:
      cout << pstr << pstar6 << endl;
      break;
    case 7:
      cout << pstr << pstar7 << endl;
      break;
    case 8:
      cout << pstr << pstar8 << endl;
      break;
    default:
      cout << "Sorry, you haven't got a lucky star." << endl;
  }

  return 0;
}
