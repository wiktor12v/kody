#!/usr/bin/env python
# -*- coding: utf-8 -*-
a, b = 5, 10
print(a + b)

# zmienna globalna, zasięg globalny, przestrzeń modułu


def sumuj1():
    print(a + b)

def odejmij(a,b):
    print(a-b)
    a, b =4, 3
def odejmij2(lista):
    lista.append(lista[0] - lista[1])


def main(args):
    global a, b
    a, b = 2, 3  # zmienne lokalne, zasieg lokalny, przestrzen fukncji
    print(a + b)
    sumuj1()
    return 0


def main2(args):
    #a, b = 2, 3
    #print(a - b)
    #odejmij(a, b)
    #rint(a - b)
    l = [3, 4]
    odejmij2(l)
    print(l)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main2(sys.argv))
