#!/usr/bin/env python
# -*- coding: utf-8 -*-


def euklides(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a

def euklides2(a, b):
    while a > 0:
        if a > b:
            a = a % b
        else:
            b = b - a
    return b


def main(args):
    a = int(input("podaj 1 liczbe: "))
    b = int(input("podaj 2 liczbe: "))

    assert euklides(1989, 867) == 51
    assert euklides(10, 5) == 5

    #print("najwiekszy wspolny dzielnik wynosi: ", euklides(a, b))
    print("Nwd({:d}, {:d}) = {:d}".format(a, b , euklides2(a, b )))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
