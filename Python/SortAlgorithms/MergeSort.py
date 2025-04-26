#
#  MergeSort.py
#
#  Projeto e Análise de Algoritmos
#
#  Aitor Lucas, 
#  26/04/2025
#

from ISort import ISort

class MergeSort(ISort):
    def sort(self, arr):
        self._merge_sort(arr)

    def _merge_sort(self, arr):
        if len(arr) > 1:
            mid = len(arr) // 2
            L, R = arr[:mid], arr[mid:]
            self._merge_sort(L)
            self._merge_sort(R)

            i = j = k = 0
            while i < len(L) and j < len(R):
                arr[k] = L[i] if L[i] < R[j] else R[j]
                i += (arr[k] == L[i]) 
                j += (arr[k] == R[j]) 
                k += 1

            while i < len(L):
                arr[k] = L[i]
                i += 1
                k += 1
            while j < len(R):
                arr[k] = R[j]
                j += 1
                k += 1
