//
//  main.cpp
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas, 
//  26/04/2025
//

#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>

#include "InsertionSort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

std::vector<int> generateRandomVector(int n) {
    std::vector<int> v(n);
    for (auto& x : v) x = rand() % 10000;
    return v;
}

void runSort(ISort* sorter, const std::string& name, int n, std::ofstream& out) {
    auto arr = generateRandomVector(n);
    auto start = std::chrono::high_resolution_clock::now();
    sorter->sort(arr);
    auto end = std::chrono::high_resolution_clock::now();
    out << name << " " << n << ": " 
        << std::chrono::duration<double>(end - start).count() << "s\n";
}

int main() {
    std::vector<int> sizes = {1000, 10000, 100000};
    std::ofstream out("Output/tempos_cpp.txt");

    InsertionSort insertion;
    SelectionSort selection;
    BubbleSort bubble;
    MergeSort merge;
    QuickSort quick;

    for (auto n : sizes) {
        runSort(&insertion, "InsertionSort", n, out);
        runSort(&selection, "SelectionSort", n, out);
        runSort(&bubble, "BubbleSort", n, out);
        runSort(&merge, "MergeSort", n, out);
        runSort(&quick, "QuickSort", n, out);
    }

    out.close();
    return 0;
}
