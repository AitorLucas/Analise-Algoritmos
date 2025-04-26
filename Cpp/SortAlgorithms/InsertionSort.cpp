//
//  InsertionSort.cpp
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas,  
//  26/04/2025
//

#include "InsertionSort.h"

void InsertionSort::sort(std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
