
#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza.py

import csv
import sqlite3
import os.path

def czy_jest(plik):
    """Funkcja sprawdza czy plik istnieje na dysku"""
    if not os.path.isfile(plik):
        print("Plik {} nie istnieje.".format(plik))
        return False
    return True    

def czytaj_dane(plik,separator=","):
    dane = [] #pusta lista
    
    if not czy_jest(plik):
        return dane
        
    with open(plik,'r', newline='', encoding='utf-8') as plikcsv:
        tresc = csv.reader(plikcsv, delimiter=separator)
        print(tresc)
        for rekord in tresc:
            dane.append(rekord)
    
    return dane 

def ile_kilumn(cur, tab):
    """F, liczy i zwraca liczbe kolumn w podanej tabeli"""
    licznik = 0
    for kol in cur.excute("PRAGMA table_info('"+ tab +"')"):
        licz += 1
    return licznik       

def main(args):
    # KONFIGURACJA ################
    baza = 'uczniowie'
    tabele = ['nazwiska' , 'dane_osobowe' , 'oceny']
    roz = '.txt'
    naglowki = True #czy plik zawiera nagłowek?
    ###############################
    con = sqlite3.connect(baza +'.db')  #połączenie
    cur =con.cursor() #obiekt kursora
    
    if not czy_jest(baza +'.sql'):
        return 0
    with open(baza+'.sql', 'r') as plik:
        cur.executescript(plik.read())
        
    for tab in tabele:
        ile = ile_kolumn(cur, tab)
    
    
    con.commit()
    con.close()
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
