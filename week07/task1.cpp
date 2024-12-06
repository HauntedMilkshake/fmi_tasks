#include <iostream>

int main () {
    int a[5]; 
    for (int i = 0; i < 5; ++i) { 
        std::cin >> a[i];
        if(a[i] % 2 == 0) { 
            a[i] -= 1;
        } else { 
            a[i] -= 3;

        }

        if (a[i] > 10) { 
            a[i] %= 10; 
        } else { 
            a[i] *= 10;
        }
    }
    std::cout << '\n';
    for(int i = 0; i < 5; ++i) { 
        std::cout << a[i] << '\n';
    }

    return 0;
}