#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    while (n > 0) {
        if (n % 10 == 1) {
            std::cout << "YES";
            break;
        } else {
            n /= 10;
        }
    }
    if (n == 0) {
        std::cout << "NO";
    }
    return 0;
}