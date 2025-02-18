#include <iostream>

void powPrint(double x) { 
    std::cout << x << "^2";
}

int main() {
    int x;
    std::cin >> x;
    powPrint(x);
    return 0;
}