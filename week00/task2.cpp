#include <iostream>

int main() { 
    
    int a = 2, b = 3; 
    std::cin >> a >> b;

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';

    a += b; 
    b -= a;
    a -= b;

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b;

    return 0; 
}