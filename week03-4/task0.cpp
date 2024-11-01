#include <iostream> 

void swap(int& a, int& b) { 
     a = a + b;
     b = a - b;
     a = a - b;
}

int main() {
    int a, b; 
    std::cin >> a >> b;
    std::cout << a << " " << b << '\n';
    swap(a, b);
    std::cout << a << " " << b;
    return 0;
}