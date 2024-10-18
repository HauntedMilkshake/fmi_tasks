#include <iostream> 

int main() { 

    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c; 

    //enables printing for true/false instead of 1/0
    std::cout << std::boolalpha; 
    std::cout << (a + b > c && a + c > b && b + c > a);

    return 0;
}