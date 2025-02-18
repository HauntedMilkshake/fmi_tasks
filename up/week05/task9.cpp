#include <iostream>

double average(int arr[], int n) { 
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum / double(n);
}

int main() { 
    int n; 
    std::cin >> n; 
    int arr[n];
    for (int i = 0; i < n; ++i) { 
        std::cout << i << ": ";
        std::cin >> arr[i];
    }
    std::cout << average(arr, n);
    return 0;
}