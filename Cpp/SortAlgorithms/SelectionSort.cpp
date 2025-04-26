//
//  SelectionSort.cpp
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas, 
//  26/04/2025
//

#include "SelectionSort.h"

void SelectionSort::sort(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        size_t minIdx = i;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        std::swap(arr[i], arr[minIdx]);
    }
}
