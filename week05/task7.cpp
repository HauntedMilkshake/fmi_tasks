#include <iostream>

bool isPalindrome(int n){ 
    if (n < 0 || (n % 10 == 0 && n != 0)) {
        return false;
    }
    
    int reversed = 0;
    while (n > reversed) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    
    return n == reversed || n == reversed / 10;
}

int main() {
    int n; 
    std::cin >> n; 
    std::cout << std::boolalpha << isPalindrome(n);
    return 0;
}