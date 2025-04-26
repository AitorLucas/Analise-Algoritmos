#
#  SelectionSort.py
#
#  Projeto e Análise de Algoritmos
#
#  Aitor Lucas, 
#  26/04/2025
#

from ISort import ISort

class SelectionSort(ISort):
    def sort(self, arr):
        for i in range(len(arr) - 1):
            min_idx = i
            for j in range(i + 1, len(arr)):
                if arr[j] < arr[min_idx]:
                    min_idx = j
            arr[i], arr[min_idx] = arr[min_idx], arr[i]
