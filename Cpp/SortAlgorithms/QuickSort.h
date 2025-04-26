//
//  QuickSort.h
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas, 
//  26/04/2025
//

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "../ISort.h"

class QuickSort : public ISort {
public:
    void sort(std::vector<int>& arr) override;

private:
    void quickSort(std::vector<int>& arr, int low, int high);
    int partition(std::vector<int>& arr, int low, int high);
};

#endif
