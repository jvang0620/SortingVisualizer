#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <vector>
#include <iostream>
#include <chrono>
#include <thread>

// Function to visualize the sorting process
void visualizeSort(const std::vector<int> &arr, const std::string &label);

// Sorting algorithms
void bubbleSort(std::vector<int> &arr);
void selectionSort(std::vector<int> &arr);
void insertionSort(std::vector<int> &arr);

#endif
