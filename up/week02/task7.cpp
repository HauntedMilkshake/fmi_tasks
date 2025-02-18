#include <iostream>

int main()
{
    for (char i = 'A'; i <= 'Z'; ++i) {
        if (i != 'A' && i != 'E' && i != 'I' && i != 'O' && i != 'U') {
            std::cout << i << " ";
        }
    }
}