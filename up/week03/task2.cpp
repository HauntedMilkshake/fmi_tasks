#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    bool flag = false;
    for (int i = 2; i <= a; ++i) {
        if (a % i == 0 && b % (i * i) == 0) {
            flag = true;
            std::cout << i << " deli purvoto i kvadrata mu " << (i * i) << " deli vtoroto";
            break;
        }
    }
    if (!flag) {
        std::cout << "nqma takova chislo";
    }
    return 0;
}