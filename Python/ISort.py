#
#  ISort.py
#
#  Projeto e Análise de Algoritmos
#
#  Aitor Lucas, 
#  26/04/2025
#

from abc import ABC, abstractmethod

class ISort(ABC):
    @abstractmethod
    def sort(self, arr):
        pass
