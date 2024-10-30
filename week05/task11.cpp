#include <iostream>

double celsiusToFahrenheit(double celsius) { 
    return (celsius * 9.0 / 5.0) + 32;
}

int main() { 
    double n; 
    std::cin >> n; 
    std::cout << celsiusToFahrenheit(n);

}