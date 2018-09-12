#!/usr/bin/env python
# -*- coding: utf-8 -*-

def suma(a, b):
    wynik = a + b
    return wynik

def roznica(a, b):
    wynik = a - b
    return wynik

def iloczyn(a, b):
    wynik = a * b
    return wynik

def iloraz(a, b):
    wynik = a / b
    return wynik



def main(args):
    a = int(input("podaj pierwsza liczbe"))
    print(a)
    b = int(input("podaj druga liczbe"))
    print(b)

    print("suma: ", suma(a, b))
    print("róznica", roznica(a, b))
    print("iloczyn", iloczyn(a, b))
    print("iloraz", iloraz(a, b))


    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
