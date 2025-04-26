//
//  MergeSort.h
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas, 
//  26/04/2025
//

#ifndef MERGESORT_H
#define MERGESORT_H

#include "../ISort.h"

class MergeSort : public ISort {
public:
    void sort(std::vector<int>& arr) override;

private:
    void mergeSort(std::vector<int>& arr, int left, int right);
    void merge(std::vector<int>& arr, int left, int mid, int right);
};

#endif
