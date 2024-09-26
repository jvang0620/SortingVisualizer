#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "SortingAlgorithms.h"

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Seed for random number generation
    std::vector<int> arr;

    // Generate random numbers
    for (int i = 0; i < 10; ++i)
    {
        arr.push_back(std::rand() % 100);
    }

    std::cout << "Original Array: ";
    visualizeSort(arr, "Original Array");

    // Bubble Sort Visualization
    std::vector<int> bubbleArr = arr; // Copy array for Bubble Sort
    bubbleSort(bubbleArr);

    // Selection Sort Visualization
    std::vector<int> selectionArr = arr; // Copy array for Selection Sort
    selectionSort(selectionArr);

    // Insertion Sort Visualization
    std::vector<int> insertionArr = arr; // Copy array for Insertion Sort
    insertionSort(insertionArr);

    std::cout << "Sorted Array: ";
    visualizeSort(arr, "Sorted Array");

    return 0;
}
