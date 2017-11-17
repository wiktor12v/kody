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

def main(args):
    return 0
    #pobierz od uzytkownika postawe i wykladnik
    # i przypisz do odpowiednich zmiennych
    #wywolaj fukcje potega_it()
    a = int(input("podaj podstawe: "))
    n = int(input("podaj wykladnik: "))
    print("potega: ", potega_it(a, n"))
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
