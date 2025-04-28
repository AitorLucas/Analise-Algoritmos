//
//  main.cpp
//
//  Projeto e Análise de Algoritmos
//
//  Aitor Lucas, Daniel
//  26/04/2025
//

#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>
#include <ctime>
#include <iomanip>

#include "./SortAlgorithms/InsertionSort.h"
#include "./SortAlgorithms/SelectionSort.h"
#include "./SortAlgorithms/BubbleSort.h"
#include "./SortAlgorithms/MergeSort.h"
#include "./SortAlgorithms/QuickSort.h"

std::vector<int> generateRandomVector(int n) {
    std::vector<int> v(n);
    for (auto& x : v) 
        x = rand() % 10000;
    return v;
}

std::string currentTimestamp() {
    auto now   = std::chrono::system_clock::now();
    auto t     = std::chrono::system_clock::to_time_t(now);
    std::tm* lt = std::localtime(&t);
    std::ostringstream ss;
    ss << std::put_time(lt, "%Y-%m-%d %H:%M:%S");
    return ss.str();
}

void runSort(ISort* sorter, const std::string& name, int n, std::ofstream& out) {
    auto arr   = generateRandomVector(n);
    auto start = std::chrono::high_resolution_clock::now();
    sorter->sort(arr);
    auto end   = std::chrono::high_resolution_clock::now();

    double elapsed = std::chrono::duration<double>(end - start).count();
    out << "[" << currentTimestamp() << "] "
        << name << " " << n << ": "
        << elapsed << "s\n";
}

int main() {
    // abre em modo append
    std::ofstream out("Output/tempos_cpp.txt", std::ios::app);
    if (!out.is_open()) {
        std::cerr << "Erro ao abrir Output/tempos_cpp.txt\n";
        return 1;
    }

    // cabeçalho opcional de execução
    out << "\n=== Execução iniciada em "
        << currentTimestamp()
        << " ===\n";

    std::vector<int> sizes = {1000, 10000, 100000};

    InsertionSort insertion;
    SelectionSort selection;
    BubbleSort    bubble;
    MergeSort     merge;
    QuickSort     quick;

    for (auto n : sizes) {
        runSort(&insertion, "InsertionSort", n, out);
        runSort(&selection, "SelectionSort", n, out);
        runSort(&bubble,    "BubbleSort",    n, out);
        runSort(&merge,     "MergeSort",     n, out);
        runSort(&quick,     "QuickSort",     n, out);
    }

    out.close();
    return 0;
}
