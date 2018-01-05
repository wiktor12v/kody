#!/usr/bin/env python
# -*- coding: utf-8 -*-


def sort_wstaw(lista):
    """wersja liniowa"""
    for i in range(1, len(lista)):
        el = lista[i]
        k = i - 1
        while k >= 0 and lista[k] > el:  # wyszkuje pozycje do wstawienia
            lista[k + 1] = lista[k]  # przesuwanie elementow w gore tabeli
            k -= 1
        lista[k + 1] = el  # wstawianie elementu
    return lista

def sort_wstaw_bin(lista):
    for i in range(1, len(lista)):
        el = lista[i]
        k = wyszukaj_bin_it(lewy, prawy,lista, el)

        #tworzenie listy z wstawionym elementem
        lista =


def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9]
    # [3, 4, 7, 0, 2, 3, 1, 9]
    # [3, 4, 7, 0, 2, 3, 1, 9]
    # [0, 3, 4 , 7, 2, 3, 1, 9]
    print(lista)
    print(sort_wstaw(lista))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
