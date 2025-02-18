#include <iostream>

int main() { 
    int n, k;
    std::cin >> n >> k;
    int a[n][k];
    for (int i = 0; i < n; ++i) { 
        for ( int j = 0; j < k; ++j) { 
            std::cin >> a[i][j];
        }
    }
    return 0; 
}