#include <iostream>

void matrix(int n, int m) { 
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            if (i == j) {
                std::cout << i + 1 << " ";
            } else if (j > i) {
                std::cout << j - i << " ";
            } else {
                std::cout << i * j << " ";
            }
        }
        std::cout << '\n';
    }
}

int main() {
    int n, m; 
    std::cin >> n >> m;
    matrix(n, m);
    return 0;
}