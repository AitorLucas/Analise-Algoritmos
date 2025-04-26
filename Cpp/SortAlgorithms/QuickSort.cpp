//
//  QuickSort.cpp
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas, 
//  26/04/2025
//

#include "QuickSort.h"

void QuickSort::sort(std::vector<int>& arr) {
    quickSort(arr, 0, arr.size() - 1);
}

void QuickSort::quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int QuickSort::partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            std::swap(arr[i], arr[j]);
            ++i;
        }
    }
    std::swap(arr[i], arr[high]);
    return i;
}
