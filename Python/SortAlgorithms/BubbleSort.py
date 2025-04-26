#
#  BubbleSort.py
#
#  Projeto e Análise de Algoritmos
#
#  Aitor Lucas, 
#  26/04/2025
#

from ISort import ISort

class BubbleSort(ISort):
    def sort(self, arr):
        for i in range(len(arr) - 1):
            for j in range(len(arr) - i - 1):
                if arr[j] > arr[j + 1]:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]
