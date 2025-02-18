#include <iostream> 

int main() {

    int a = 0, b = 0;
    std::cin >> a >> b;

    int product = a * b;

    std::cout << product << " " << product % 10 << " " <<  (product % 2 == 0);

    return 0;
}