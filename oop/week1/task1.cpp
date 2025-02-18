#include <iostream>

bool isNumber(char c) { 
    return c >= '0' && c <= '9';
}
char *digitsOnly(char *input, size_t size)
{
    size_t newSize = 0;
    for (int i = 0; i < size; ++i) { 
        newSize += isNumber(input[i]);
    }
    
    char *answer = new char[newSize + 1];
    int answerIndex = 0;

    for (int i = 0; i < size; ++i)
    {
        if (input[i] >= '0' && input[i] <= '9')
        {
            answer[answerIndex] = input[i];
            ++answerIndex;
        }
    }

    answer[newSize] = '\0';
    return answer;
}

size_t getSize(char *str)
{
    size_t size = 0;
    while (str[size] != '\0')
    {
        ++size;
    }
    return size;
}

int main()
{
    char* input = new char[255];
    std::cin.getline(input, 255);
    char* digitOnlyString = digitsOnly(input, getSize(input));

    std::cout << digitOnlyString;

    delete[] input;
    delete[] digitOnlyString;
}