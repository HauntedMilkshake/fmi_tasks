#include <iostream>


int secondMax(int a[6]) { 

}

int main() {
    bool numbers[100] = {0};
    unsigned int n; 
    while(n != 0) { 
        do { 
            std::cin >> n;
        } while (n < 0);
        if (n == 0) break;
        numbers[n] = !numbers[n];
    
    }
    for (int i = 1; i <= 100; ++i) { 
        if (!numbers[i]) std::cout << i << " ";
    }
  
    return 0;
}