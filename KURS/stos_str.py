#!/usr/bin/env python
# -*- coding: utf-8 -*-

stos = [] #pusta lista, zasieg globalny
SP = 0 #wskaznik wierzchołka

def push(rozmiar,dane):
    global stos, SP
    if SP < rozmiar:
        stos[SP] = dane
        SP += 1
    else:
        print("Stack overflow!")

def pop(rozmiar):
    global stos, SP
    SP -= 1 #dekrementacja
    if SP >= 0:
        print(stos[SP])
        stos[SP] = None
    else:
        print("stack overflow")

def main(args):
    global stos, SP
    rozmiar = int(input("podaj rozmiar stosu: "))
    stos = [None] * rozmiar
    push(rozmiar, 2)
    push(rozmiar, 5)
    pop(rozmiar)
    push(rozmiar, 3)
    pop(rozmiar)
    print(stos)
    print(SP)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
