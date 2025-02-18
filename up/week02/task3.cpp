#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int a = 0, b = 1, fib;

    if (n == 0) {
        std::cout << a;
        return 0;
    } else if (n == 1) {
        std::cout << b;
        return 0;
    }

    for (int i = 2; i <= n; ++i) {
        fib = a + b; 
        a = b;
        b = fib;
    }

    std::cout << fib ;

    return 0;
}
