//
//  BubbleSort.h
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas, 
//  26/04/2025
//

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "../ISort.h"

class BubbleSort : public ISort {
public:
    void sort(std::vector<int>& arr) override;
};

#endif
