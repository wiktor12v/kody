#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  reszta.py
#
#


def pobierzNominaly():
    nominaly = set([200, 100, 50, 20, 10, 5, 2, 1])
    n = int(input('podaj nominal lub 0 aby zakonczyc'))
    ListaNm = []
    while n > 0:
        if n in nominaly:
            ListaNm.append(n)
        else:
            print('błąd')
        n = int(input('podaj nominal lub 0 aby zakonczyc'))
    ListaNm.sort(reverse=True)  # sortowanie malejące listy
    return ListaNm


def wydajReszte1(r, l):
    i = 0
    while r > 0:
        if i < LiczbaaNm and r >= l[i]:
            ileNm = int(r / l[i])
            r -= ileNm * l[i]
            print("{} x {} zł".format(ileNm, l[i]))

        i += 1


def wydajReszte2(r, listaNm):
    i = 0
    liczbaNm = len(listaNm)  # liczba nominałów
    while r > 0 and i < liczbaNm:
        while i < liczbaNm and r < listaNm[i]:
            i += 1
        if i < liczbaNm and r >= listaNm[i]:
            nominal = listaNm[i]
            ileNm = int(r / nominal)
            if ileNm > listaNm.count(nominal):
                ileNm = listaNm.count(nominal)
            r -= ileNm * nominal
            for j in range(ileNm):
                listaNm.remove(nominal)
                liczbaNm -= 1
            i = 0
            print("{} x {}".format(ileNm, nominal))
    if r > 0:
        print("brak nominalow do wydania reszty z {} zł.".format(r))


def main(args):
    #listaNm = [200, 100, 20 ,10, 5 ,2 ,1]
    listaNm = pobierzNominaly()
    reszta = int(input('podaj resztee: '))
    # wydajReszte1(reszta,listaNm)
    wydajReszte2(reszta, listaNm)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
