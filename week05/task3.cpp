#include <iostream>

int gcd(int a, int b) { 
    for (int i = std::max(a, b); i > 1; --i) { 
        if (a % i == 0 && b % i == 0) { 
            return i;
        }
    }
    return 1;
}

int main() { 
    int a, b; 
    std::cin >> a >> b;
    std::cout << gcd(a, b);
    return 0;
}