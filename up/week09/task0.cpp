#include <iostream> 

int main() { 
    int d = 10;
    int* a = &d;
    //pointers expect address b is a pointer of type int
    //&gives the address of the variable
    int* b = a;
    int c[5] = {1, 2, 3, 4, 5};
    //pointer to the first variable of the array
    int* e = c;
    for (int i = 0; i < 5; ++i) { 
        std::cout << *(e + i) << '\n'; 
    }
    std::cout << *b;
    std::cout << a; 
    
    int* ptr = nullptr;
    if (ptr == nullptr) { 
        std::cout << ptr << '\n';
    }
    int x = 10;
    ptr = &x;
    std::cout << *ptr << " ";

    int* k = new int(25);
    std::cout << *k;
    delete k;
    return 0;
}