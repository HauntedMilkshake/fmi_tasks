#include <iostream>

double pow(double base, int exponent) { 
    if (exponent == 0) return 1;
    if (exponent < 0) { 
        base = 1 / base; 
        exponent = -exponent;
    }
    double power = 1.0;
    for (int i = 0; i < exponent; ++i) { 
        power *= base;
    }
    return power;
}

int main() { 
    double base; 
    int exponent; 
    std::cin >> base >> exponent;
    std::cout << pow(base, exponent);
    
    return 0;
}