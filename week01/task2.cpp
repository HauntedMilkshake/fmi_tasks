#include <iostream>

int main() {
    char symbol; 
    std::cout << "Enter symbol: ";
    std::cin >> symbol;

      if (symbol >= 'A' && symbol <= 'Z'){

        std::cout << "The lower case character corresponding to is: " << char(symbol + 32);

      } else if (symbol >= 'a' && symbol <= 'z') { 

        std::cout << "The upper case character corresponding to is: " << char(symbol - 32);

      } else {

        std::cout << symbol << " is not a letter";

      }

      return 0;
}