#include <iostream>

void swap(int* a, int* b) { 
    int temp = *a;
    *a = *b; 
    *b = temp;
}

int main() { 
    int x = 10, y = 12;
    std::cout << x << " " << y << '\n';
    swap(&x, &y);
    std::cout << x << " " << y;
    return 0;
}