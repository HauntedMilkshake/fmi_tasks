#include <iostream>

void fibonacci(int n) {
    int a = 0, b = 1, next;

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            std::cout << a << " ";
            continue;
        }
        if (i == 1) {
            std::cout << b << " ";
            continue;
        }
        next = a + b; 
        a = b; 
        b = next;
        std::cout << next << " ";
    }

}

int main() {
    int n; 
    std::cin >> n;
    fibonacci(n);
    return 0;
}