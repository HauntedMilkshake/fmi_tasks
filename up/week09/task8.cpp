#include <iostream>

void change(int* a) { 
    std::cout << "before: " << *a << '\n';
    *a += 2;
    std::cout << "after: " << *a; 
}

int main() { 
    int x = 10;
    change(&x);
    return 0;
}
