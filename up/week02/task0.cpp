#include <iostream>

int main() { 
    int n;
    std::cin >> n;

    int product = 1;
    
    for (int i = 1; i <= n; ++i) { 
        product *= i;
    }

    std::cout << product;
}