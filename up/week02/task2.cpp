#include <iostream> 
#include <limits>

int main() { 
    int numberCount;
    std::cin >> numberCount; 
    int biggestNegativeNumber = std::numeric_limits<int>::min();
    int currentNumber;

    for (int i = 0; i < numberCount; ++i) { 
        std::cin >> currentNumber;
        if (currentNumber < 0 && currentNumber > biggestNegativeNumber) { 
            biggestNegativeNumber = currentNumber;
        }
    }

    std::cout << biggestNegativeNumber;
}