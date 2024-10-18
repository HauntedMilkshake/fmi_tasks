#include <iostream>

int main() { 
    int year = 0;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if(year % 10 == 0 && (year / 10) % 10 == 0 && year % 400 || year % 4 == 0) { 
        std::cout << year << " is a leap year";
    } else {
        std::cout << year << " is not a leap year";
        
    }
    
    return 0;
}