#include <iostream>


int secondMax(int a[6]) { 

}

int main() { 
    int a[6];
    int max, min, sMax, sMin;
    for (int i = 0; i < 6; ++i) { 
        std::cin >> a[i];
        
    }

    max = a[0];
    min = a[0];
    sMax = a[0];
    sMin = a[0];

    for(int i = 0; i < 6; ++i) { 
        if (max <= a[i]) { 
            max = a[i];
        }
        if (sMax <= a[i] && a[i] < max) { 
            sMax = a[i];
        }
        if (min >= a[i]) {
            min = a[i];
        }
        if (sMin >= a[i] && a[i] > min) { 
            sMin = a[i];
        }
    }
    std::cout << sMax << " " << sMin;
    return 0;
}