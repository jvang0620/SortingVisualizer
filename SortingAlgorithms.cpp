#include "SortingAlgorithms.h"

// Function to visualize the sorting process
void visualizeSort(const std::vector<int> &arr, const std::string &label)
{
    std::cout << label << ": ";
    for (int value : arr)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Pause for a moment
}

// Bubble Sort implementation
void bubbleSort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                visualizeSort(arr, "Bubble Sort");
            }
        }
    }
}

// Selection Sort implementation
void selectionSort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
        visualizeSort(arr, "Selection Sort");
    }
}

// Insertion Sort implementation
void insertionSort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
        visualizeSort(arr, "Insertion Sort");
    }
}
