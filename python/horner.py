#!/usr/bin/env python
# -*- coding: utf-8 -*-


def horner_rek(k, tbwsp, x):
    if k== 0:
        return tbwsp[0]*x
    return horner_rek(k-1, tbwsp, x) *x + tbwsp[k]


def horner_it(k, tbwsp, x):

    wynik = tbwsp[0]
    for i in range(1, k + 1):
     wynik = wynik * x + tbwsp[i]

    return wynik


def main(args):


    tbwsp = []
    stopien = 3
     x = int(input("podaj wartosc agrumentu"))
     for i in range(0, 4)
         tmp = int(input("podaj wspolczynnik"))
        tbwsp.append(tmp)

print ("wykladnik wielomianu wynosi", horner_rek(stopien

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
