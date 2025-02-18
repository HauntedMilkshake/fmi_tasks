#include <iostream> 

int main() { 
    int input;
    std::cin >> input;
    int firstDigit = input / 1000;
    int secondDigit = (input / 100) % 10;
    int thirdDigit = (input / 10) % 10;
    int fourthDigit = input % 10;

    std::cout << std::boolalpha;
    std::cout << (firstDigit > secondDigit && firstDigit > secondDigit && firstDigit > thirdDigit && firstDigit > fourthDigit);

    return 0;
}