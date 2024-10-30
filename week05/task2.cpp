#include <iostream>

bool isPrime(int n) { 
    if (n < 2) return false; 
    if (n == 2) return true; 
    if (n % 2 == 0) return false;
    // i += 2 to skip even numbers
    for (int i = 3; (i * i) <= n; i += 2) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() { 
    int n; 
    std::cin >> n; 
    std::cout << std::boolalpha;
    std::cout << isPrime(n);
    return 0;
}