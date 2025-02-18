#include <iostream>

char intToLetter(int a) { 
    char letter = a + 96;
    if (a == 0) letter = '.';
    return letter;
}

unsigned int size(unsigned long long int n) { 
    unsigned int size = 0;
    while (n != 0) { 
        ++size;
        n /= 10;
    }
    return size;
}

unsigned int intToString(char stringToFill[], unsigned long long int number) { 
    unsigned int index = 0;

    if (number == 0) { 
        stringToFill[index] = '0';
    }

    while (number != 0) { 
        stringToFill[index] = char('0' + number % 10);
        number /= 10;
        ++index;
    }

    stringToFill[index + 1] = '\0';
    return index - 1;
}

unsigned int charToInt(char letter) { 
    return int(letter - '0');
}

int main() { 

    unsigned long long int n; 
    std::cin >> n;

    unsigned int nSize = size(n);
    char nString[nSize + 1];

    int end = intToString(nString, n);
    char answer[end + 1];

    int index = end;
    int answerIndex = 0;
    while (index >= 0) { 
        if(index != 0 && (nString[index] != '0') && charToInt(nString[index]) * 10 + charToInt(nString[index - 1]) < 27) { 
            // std::cout << "case 1: " << '\n';
            answer[answerIndex] = intToLetter(charToInt(nString[index]) * 10 + charToInt(nString[index - 1]));
            index -= 2;
        } else { 
            answer[answerIndex] = intToLetter(charToInt(nString[index]));
            --index;
        }
        ++answerIndex;
    }
    answer[answerIndex] = '\0';
    std::cout << answer;

    return 0; 
}