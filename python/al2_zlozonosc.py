#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = 0
    while a < 1 or a > 99: # wyznaczam poprawny zakres
        a = int(input("podaj liczbe: "))

    for i in range(2, a+1, 2):
        print(i)
        if a == i:
            print("parzysta!")
            return 0
    print("nieparzysta")
    return 0
    # i = 2
    # while i<= a:
    #     if a == i:
    #         print("parzysta")
    #         return 0
    #     i += 2
    # print("nieparzysta")
    # return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
