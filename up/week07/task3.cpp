#include <iostream>

int main() { 
    bool a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 6; ++i) { 
        int n; std::cin >> n, a[n] = 1;
        if(i == 5) std::cout << std::boolalpha << a[n];
    }
    return 0;
}