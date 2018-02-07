#!/usr/bin/env python
# -*- coding: utf-8 -*-
def szyfruj(tekst, klucz):
    reszta = len(tekst) % klucz
    if reszta:
        tekst += (klucz -reszta)* "."
    print(tekst)


    for i in range(klucz):
        for j in range(int(len(tekst) / klucz)):
            #0, 10, 20, 30
            #1, 11, 21 ,31
            print(i + j *klucz, tekst[i + j * klucz])
            szyfrogram +=  tekst[i + j * klucz]
    return szyfrogram


   def reszyfruj





def main(args):

    tekst = input("podaj tekst: ")

    klucz = int(input("podaj klucz: "))
    while(2 * klucz > len(tekst)):
            klucz = int(input("podaj klucz: "))
    szyfrogram = szyfruj(tekst, klucz)
    print(szyfrogram)
    #print(deszyfruj(szyfrogram, klucz))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
