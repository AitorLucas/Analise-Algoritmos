#
#  QuickSort.py
#
#  Projeto e Análise de Algoritmos
#
#  Aitor Lucas, 
#  26/04/2025
#

from ISort import ISort

class QuickSort(ISort):
    def sort(self, arr):
        self._quick_sort(arr, 0, len(arr) - 1)

    def _quick_sort(self, arr, low, high):
        if low < high:
            pi = self._partition(arr, low, high)
            self._quick_sort(arr, low, pi - 1)
            self._quick_sort(arr, pi + 1, high)

    def _partition(self, arr, low, high):
        pivot = arr[high]
        i = low
        for j in range(low, high):
            if arr[j] < pivot:
                arr[i], arr[j] = arr[j], arr[i]
                i += 1
        arr[i], arr[high] = arr[high], arr[i]
        return i
