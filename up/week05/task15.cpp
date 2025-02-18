#include <iostream>

void toUpperCase(std::string &str) {
        for (char &c : str) { 
        c -= 32; 
    }
}

int main() {
    std::string input;
    std::getline(std::cin, input); 

    toUpperCase(input); 

    std::cout << input;

    return 0;
}