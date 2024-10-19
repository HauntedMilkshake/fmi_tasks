#include <iostream> 

int main() {
    int a, n; 
    std::cin >> a >> n; 
    int result = 1;
    for(int i = 0; i < n; ++i) { 
        result *= a;
    }

    std::cout << result; 
}