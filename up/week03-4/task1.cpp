#include <iostream>

bool isEven(int a) { 
    return (a % 2 == 0) ;
}

int main() { 
    int a;
    std::cin >> a;
    std::cout << std::boolalpha << isEven(a);
    return 0;
}