#include <iostream> 

int answer[5/2] = {0}; 

int* half(int* b, int size) { 

    for (int i = 0; i < (size/2); ++i) { 
        answer[i] = b[i];
    }
    return answer;
}

int main() { 

    int a[5] = {1, 2, 3, 4, 5};
    int b[5/2] = half(a, 5);
    for(int i = 0; i < 5/2; ++i) { 
        std::cout << b[i] << " ";
    }
    return 0;
}