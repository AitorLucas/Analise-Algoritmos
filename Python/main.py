#
#  main.py
#
#  Projeto e Análise de Algoritmos
#
#  Aitor Lucas, 
#  26/04/2025
#

import random
import time
from SortAlgorithms.InsertionSort import InsertionSort
from SortAlgorithms.SelectionSort import SelectionSort
from SortAlgorithms.BubbleSort import BubbleSort
from SortAlgorithms.MergeSort import MergeSort
from SortAlgorithms.QuickSort import QuickSort

def generate_random_list(n):
    return [random.randint(0, 10000) for _ in range(n)]

def run_sort(sorter, name, n, f):
    arr = generate_random_list(n)
    start = time.time()
    sorter.sort(arr)
    end = time.time()
    f.write(f'{name} {n}: {end - start:.6f}s\n')

if __name__ == "__main__":
    sizes = [1000, 10000, 100000]
    with open('saida/tempos_python.txt', 'w') as f:
        insertion = InsertionSort()
        selection = SelectionSort()
        bubble = BubbleSort()
        merge = MergeSort()
        quick = QuickSort()

        for n in sizes:
            run_sort(insertion, "InsertionSort", n, f)
            run_sort(selection, "SelectionSort", n, f)
            run_sort(bubble, "BubbleSort", n, f)
            run_sort(merge, "MergeSort", n, f)
            run_sort(quick, "QuickSort", n, f)

