#!/usr/bin/env python
# -*- coding: utf-8 -*-
from random import randint


def minimum(lista):
    min = lista[0]
    for i in lista:
        if i < min:
            min = i
    return min


def maksimum(lista):
    max = lista[0]
    for i in lista:
        if i > max:
            min = i
    return min


def losuj(ile, zakres):
    lista = []
    for i in range(ile):
        lista.append(randint(0, zakres))
    return lista

    def minmax(lista):
        lmax = []
        lmin = []
        indeks = 0
        for i in range(int(len(lista) / 2)):
            if lista[indeks] > lista[indeks + 1]:
                lmax.append(lista[indeks])
                lmin.append(lista[indeks + 1])
            elif lista[indeks] < lista[indeks + 1]:
                lmax.append(lista[indeks])
                lmin.append(lista[indeks + 1])
            indeks += 2
        print("lista max: ", lmax)
        print("lista min: ", lmin)

        return lmax, lmin



def main(args):
    lmin = []
    lmax = []
    ile = 20
    zakres = 50
    lista = losuj(ile, zakres)
    assert minimum([7, 3, 9, 1, 0]) == 0
    assert maksimum([7, 3, 9, 1, 0]) == 9
    print(lista)
    print ("minimum", minimum(lista))
    print ("maksimum", maksimum(lista))
    print("lista max: ", lmax)
    print("lista min: ", lmin)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
