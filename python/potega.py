#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a
# an = a* ... *a (n-czynnikow) dla N+ - {1}


def potega_it(podst, wykladnik):
    """Funkcja oblicza literacyjnie potęgęliczby naturalnej """
    wynik = 1
    for i in range(wykladnik):
        wynik = wynik * podst
    return wynik


def potega_rek(a, n):
    if n == 0:
        return 1
    return potega_rek(a, n - 1) * a


def main(args):

    # pobierz od uzytkownika postawe i wykladnik
    # i przypisz do odpowiednich zmiennych
    # wywolaj fukcje potega_it()
    podstawa = int(input("podaj podstawe: "))
    wykladnik = int(input("podaj wykladnik: "))
    assert type(podstawa) == int
    assert type(wykladnik) == int

    assert potega_it(100, 0) == 1
    assert potega_it(100, 1) == 100
    assert potega_it(2, 3) == 8

    assert potega_rek(2, 3) == 8

    print("wynik: ", potega_rek(podstawa, wykladnik))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
