#include <iostream>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; ++i) { 
        fact *= i;
    }
    return fact;
}
int main() { 
    int input; 
    std::cin >> input;
    
    std::cout << factorial(input); 

    return 0;
}

