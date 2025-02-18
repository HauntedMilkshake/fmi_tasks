#include <iostream>

int main() { 
    int x = 0, start = 0, end = 0;
    std::cin >> x >> start >> end;

    //doing the same thing we did in task5
    std::cout << std::boolalpha;
    std::cout << (x >= start && x <= end);
    
    return 0;
}