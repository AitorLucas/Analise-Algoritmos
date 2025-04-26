//
//  SelectionSort.h
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas, 
//  26/04/2025
//

#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "../ISort.h"

class SelectionSort : public ISort {
public:
    void sort(std::vector<int>& arr) override;
};

#endif
