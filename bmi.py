#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    wzrost = float(input("podaj wzrost: "))
    waga = int(input("podaj mase: "))
    bmi = waga / (wzrost * wzrost)
    print(bmi)

    while bmi>=0:

        if bmi >= 30:
            print("otyłość")
        elif bmi >= 25:
            print("niedowaga")
        elif bmi >= 18.5:
            print("norma")
        else:
            print("niedowaga")
    wzrost = float(input("podaj wzrost: "))
    waga = int(input("podaj mase: "))
    bmi = waga / (wzrost * wzrost)
    print(bmi)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
