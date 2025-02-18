#include <iostream>

int main() { 
    int a = 5;
    int* b = &a;
    int** c = &b;
    std::cout << **c;
    return 0;
}