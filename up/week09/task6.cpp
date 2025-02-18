#include <iostream>


void print(int* b) { 
    for (int i = 0; i < 5; ++i) { 
        std::cout << b[i] << " ";
    }
}
int main() { 
    int a[5] = {1, 2, 3, 4, 5};
    print(a);

    return 0;
}