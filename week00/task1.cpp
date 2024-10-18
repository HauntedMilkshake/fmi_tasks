#include <iostream>

int main() {

    int input = 0;
    std::cin >> input;

    int firstDigit = input / 100;
    int secondDigit = (input / 10) % 10;
    int thirdDigit = input % 10;

    std::cout << "first digit: " << firstDigit << '\n';
    std::cout << "second digit: " << secondDigit << '\n';
    std::cout << "third digit: " << thirdDigit << '\n';
    std::cout << "sum: " << (firstDigit + secondDigit + thirdDigit);

    return 0;
}