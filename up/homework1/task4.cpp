#include <iostream>

int main() { 
    unsigned int n, m;
    std::cin >> n >> m;
    
    int array[n][m];
    int answer[n][m];

    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            std::cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) {
            if (j + 1 + i < n) { 
                answer[j + 1 + i][j] = array[i][j];

            } else { 
                answer[j + 1 + i - n][j] = array[i][j];
            }
        }
    }

    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            std::cout << answer[i][j] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}