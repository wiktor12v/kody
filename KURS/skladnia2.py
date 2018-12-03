#!/usr/bin/env python
# -*- coding: utf-8 -*-

def mnoz(a,b):
    print(a * b)
def mnoz2(*args): #zmienna liczba argumentow
    wynik = 1
    for liczba in args:
        wynik *= liczba
    print(wynik)
def wylicz(imie1='ada', imie2='ewa', **kwargs):
    print(imie1)
    print(imie2)
    for k, v in kwargs.items():
        print('{} {}'.format(k,v))

def main(args):
    mnoz(4,6)
    mnoz2(1,2,3,4,5)
    wylicz(imie2='ola', imie3='piotrek', imie4='alfons')
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
