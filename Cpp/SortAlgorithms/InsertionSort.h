//
//  InsertionSort.h
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas,  
//  26/04/2025
//

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "../ISort.h"

class InsertionSort : public ISort {
public:
    void sort(std::vector<int>& arr) override;
};

#endif
