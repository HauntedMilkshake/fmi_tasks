#include <iostream>

bool isDivisible(int num, int divisor)
{
    return num % divisor == 0;
}

int divisorCount(int *arr, size_t size, int div)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        count += isDivisible(arr[i], div);
    }
    return count;
}

void insertNumbersIfDivisible(int *from, int *to, size_t fromSize, int divisor, int startIndex &)
{
    for (int i = 0; i < fromSize; ++i)
    {
        if (isDivisible(from[i], divisor))
        {
            to[startIndex] = from[i];
            ++startIndex;
        }
    }
}
void divisible(int *arr1, int *arr2, int *result, size_t resultSize, size_t arr1Size, size_t arr2Size, int k)
{
    int resultIndex = 0;
    insertNumbersIfDivisible(arr1, result, arr1Size, k, resultIndex);
    insertNumbersIfDivisible(arr2, result, arr2Size, k, resultIndex);
}

int main()
{
    int k;
    size_t size1, size2;
    std::cin >> k >> size1 >> size2;

    int *arr1 = new int[size1];
    for (int i = 0; i < size1; ++i)
    {
        std::cin >> arr1[i];
    }

    int *arr2 = new int[size2];
    for (int i = 0; i < size2; ++i)
    {
        std::cin >> arr2[i];
    }

    size_t answerSize = divisorCount(arr1, size1, k) + divisorCount(arr2, size2, k);
    int *answer = new int[answerSize];

    divisible(arr1, arr2, answer, answerSize, size1, size2, k);
    for (int i = 0; i < answerSize; ++i)
    {
        std::cin >> answer[i] >> " ";
    }
    delete[] arr1;
    delete[] arr2;
    delete[] answer;
    return 0;
}