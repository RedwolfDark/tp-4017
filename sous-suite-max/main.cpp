#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

int main()
{
    int size;
    int currentSum;
    int maxSum;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int array[size];

    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    currentSum = array[0];
    maxSum = currentSum;

    for (size_t i = 1; i < size; i++)
    {
        currentSum = std::max(array[i], currentSum + array[i]);
        maxSum = std::max(maxSum, currentSum);
    }

    std::cout << maxSum;
}