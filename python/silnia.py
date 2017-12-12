#!/usr/bin/env python
# -*- coding: utf-8 -*-
# n! = 1 dla {0,1}
# n! = 1*2*... n dla n+ -{0,1}
# an = a * ... * a (n-czynników) dla N+ - {0,1}
# 4! = 3!* 4

def silnia_rek(n):
    if n < 2:
        return 1
    return silnia_rek(n-1) * n



def silnia_it(n):
    """Funkcja oblicza iteracyjnie potęgę l. naturalnej"""
    wynik = 1
    for i in range(2, n + 1):
        wynik = wynik * i

    return wynik


def main(args):
    # pobierz od użytkownika podstawę i wykładnik
    # i przypisz do odpowiednich zmiennych
    # wywołaj funkcję potega_it()
    n = int(input("Podaj liczbę: "))
    assert type(n) == int

    assert silnia_it(0) == 1
    assert silnia_it(1) == 1
    assert silnia_it(5) == 120
    assert silnia_rek(7) == 5040


    print("silnia jest rowna: ", silnia_rek(n))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
