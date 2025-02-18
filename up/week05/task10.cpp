#include <iostream>

void minMax(int arr[], int n, int &min, int &max) { 
    for (int i = 0; i < n; ++i) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
}

int main() { 
    int n; 
    std::cin >> n; 
    int arr[n];
    for (int i = 0; i < n; ++i) { 
        std::cout << i << ": ";
        std::cin >> arr[i];
    }
    int min = arr[0], max = arr[0];
    minMax(arr, n, min, max);
    std::cout << min << " " << max;
    return 0;
}