#include <iostream>

int main()
{

    int a, b;

    std::cout << "Вход: ";
    std::cin >> a >> b;

    if (a == 0) { 
        if (b == 0) { 
            std::cout << "INF";
        } else { 
            std::cout << "NO";
        }
    } else {
        std::cout << -(b / a);\
    }

    return 0;
}