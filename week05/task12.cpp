#include <iostream>

bool isLeapYear(int year){
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
int main() {
    int year;
    std::cin >> year;
    std::cout << std::boolalpha << isLeapYear(year);
    return 0;
}