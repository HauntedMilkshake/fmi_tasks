#include <iostream>

int reverseNumber(int n) { 
    int reversedNumber = 0;
    while (n != 0) { 
        reversedNumber = reversedNumber * 10 + n % 10;
        n /= 10;
    }
    return reversedNumber;
}
int main() {
    int n; 
    std::cin >> n; 
    std::cout << reverseNumber(n);
    return 0;
}