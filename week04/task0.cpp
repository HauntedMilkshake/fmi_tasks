#include <iostream>


int calculate(int a, int b) {
    std::cout << "Calculating!" << '\n';
    std::cout << a + b;
    return a + b;
}
int main() { 
    int a, b; 
    std::cin >> a >> b;
    calculate(a, b);
    return 0;
}