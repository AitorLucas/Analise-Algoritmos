#
#  InsertionSort.py
#
#  Projeto e Análise de Algoritmos
#
#  Aitor Lucas, 
#  26/04/2025
#

from ISort import ISort

class InsertionSort(ISort):
    def sort(self, arr):
        for i in range(1, len(arr)):
            key = arr[i]
            j = i - 1
            while j >= 0 and arr[j] > key:
                arr[j + 1] = arr[j]
                j -= 1
            arr[j + 1] = key