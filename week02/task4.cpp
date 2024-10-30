#include <iostream> 

int main() { 

    int sum = 0;
    int number;
    while (true) { 
        std::cin >> number;
        sum += number;

        if (number == 0) { 
            break;
        }
    }

    std::cout << sum;
    return 0;
}