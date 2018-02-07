#!/usr/bin/env python
# -*- coding: utf-8 -*-


def szyfruj(tekst, klucz):
    """
    Szyfrowanie tekstu za pomocą szyfru Cezara
        """
    szyfrogram = ""
    klucz = klucz % 26
    for znak in tekst:
        ascii = ord(znak) + klucz
        if ascii > 90:
            ascii -= 26
        szyfrogram += chr(ascii)
    return szyfrogram

def deszyfruj(szyfrogram, klucz):
    tekst = ""
    pass
    for i in szyfrogram:
        ascii = ord(i) - klucz
        if ord(i) == 32:
            ascii = 32
        if ascii > 90 and ascii < 97:
            ascii -= 26
        elif ascii > 122:
            ascii -= 26
        tekst += chr(ascii)

    return tekst

#obsluzy male i duze litery



def main(args):
    tekst = input("podaj tekst: ")
    klucz = int(input("podaj klucz: "))
    szyfrogram = szyfruj(tekst, klucz)
    print(szyfrogram)
    return 0



if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
