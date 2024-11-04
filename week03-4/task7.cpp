#include <iostream>

void checkOccurance(int number, int numberToCheck) { 
    int occurance = 0; 
    while (number != 0) { 
        occurance += ((number % 10) == numberToCheck); 
        number /= 10;
    }
    std::cout << "цифрата " << numberToCheck << " се среща " << occurance << " пъти";
}

int main() {
    int number, numberToCheck;
    std::cin >> number >> numberToCheck;
    checkOccurance(number, numberToCheck);
    return 0;
}