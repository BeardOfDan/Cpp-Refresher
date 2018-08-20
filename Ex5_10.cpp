// Ex5_10.cpp

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cctype>
using std::isalpha;
using std::tolower;

int main() {
  const int maxLength{100};
  char text[maxLength]{};

  cout << "Please enter a line of text:" << endl;

  // Read a line of text, including spaces
  cin.getline(text, maxLength);
  cout << "You entered: \"" << text << "\"" << endl;

  size_t vowels{};
  size_t consonants{};

  for (int i{}; text[i] != '\0'; i++) {
    if (isalpha(text[i])) {  // if is letter
      switch (tolower(text[i])) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          vowels++;
          break;

        default:
          consonants++;
      }
    }
  }

  cout << "Your input contained: " << vowels << " vowels and " << consonants
       << " consonants." << endl;

  return 0;
}
