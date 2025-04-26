//
//  ISort.h
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas, 
//  26/04/2025
//

#ifndef ISORT_H
#define ISORT_H

#include <vector>

class ISort {
public:
    virtual void sort(std::vector<int>& arr) = 0;
    virtual ~ISort() {}
};

#endif
