#include <iostream> 

int main() {
    int i; 
    std::cin >> i;

    for(int j = 1; j <= i; ++j) { 
        std::cout << j * j + 3 * j << " "; 
    }
}