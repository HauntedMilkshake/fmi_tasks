#include <iostream>

double maxOf3(double a, double b, double c) {
    double d = std::max(a, b);
    return (d > c) ? d : c; 
}

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    std::cout << maxOf3(a, b, c);
    return 0;
}