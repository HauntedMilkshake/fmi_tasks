#include <iostream>

int main() { 

    int a = 0, b = 0, c = 0;   
    std::cin >> a >> b >> c; 

    std::cout << std::min(std::min(a , b), c) << " " << std::max(std::max(a , b), c);

    return 0;
}