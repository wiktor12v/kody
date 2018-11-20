#!/usr/bin/env python
# -*- coding: utf-8 -*-


def push(stos, rozmiar, SP, dane):
    if SP < rozmiar:
        stos[SP] = dane
        SP += 1
    else:
        print("Stack overflow!")
    return SP


def pop(stos, rozmiar, sp):
    element = None
    SP -= 1  # dekrementacja
    if SP >= 0:
        print(stos[SP])
        stos[SP] = None
    else:
        print("stack overflow")

    return SP, element


def main(args):
    stos = []  # pusta lista, zasieg globalny
    SP = 0  # wskaznik wierzchołka
    rozmiar = 3
    stos = [None] * rozmiar
    SP = push(stos, rozmiar, SP, 2)
    SP = push(stos, rozmiar, SP, 5)
    SP, element = pop(Stos, rozmiar, SP)
    Print(SP)
    SP = push(stos, rozmiar, SP, 3)
    Sp, element = pop(Stos, rozmiar, SP)
    print(SP)
    print(stos)
    print(SP)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
