#include <iostream> 

bool isAlpha(char c) { 
    return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

unsigned int wordCount(char* str, size_t size) {
    int wordStart = 0;
    int wordEnd = 0;
    unsigned int wordCount = 0;
    for (int i = 0; i < size; ++i) { 
        if(isAlpha(str[i])) { 
            wordStart = i;
        } else { 
            if (wordStart >= wordEnd) { 
                wordEnd = wordStart;
                ++wordCount;
            }
        }
        
    } 
    return wordCount;
}

size_t getSize(char* str) { 
    size_t size = 0;
    while(str[size] != '\0') { 
        ++size;
    }
    return size;
}

int main() { 
    char* input = new char[255];
    std::cin.getline(input, 255);
    std::cout << wordCount(input, getSize(input)); 
    delete[] input;
    return 0;
}