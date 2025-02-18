#include <iostream>

int partition(int arr[], int low, int high) { 
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= (high - 1); ++j) { 
        if (arr[j] < pivot) { 
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) { 
    if (low < high) { 
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}   

void printArr(int arr[], int n) { 
    for (int i = 0; i < n; ++i) { 
        std::cout << arr[i] << " ";
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
    quickSort(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}