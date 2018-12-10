#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy.py
#  

import sqlite3 

def kwerenda1(cur):
    
    cur.execute("""
        SELECT *  FROM nazwiska
        INNER JOIN dane_osobowe ON nazwiska.nr_ucznia = dane_osobowe.nr_ucznia
        WHERE miesiac = '10'
             """)
    
    #WHERE miejsce_urodz <> 'Gdańsku'
    #WHERE miejsce_urodz = 'Gdańsku'
    #SELECT * FROM nazwiska
    #INNER JOIN dane_osobowe ON nazwiska.nr_ucznia = dane_osobowe.nr_ucznia
    #SELECT * FROM nazwiska WHERE nazwisko LIKE 'G%'##
    #SELECT * FROM nazwiska WHERE imie1 LIKE 'A__a'#
   
    for row in cur.fetchall():
        print(tuple(row))

def main(args):
    # KONFIGURACJA ################
    baza = 'uczniowie'
    tabele = ['nazwiska' , 'dane_osobowe' , 'oceny']
    roz = '.txt'
    naglowki = True #czy plik zawiera nagłowek?
    ###############################
    con = sqlite3.connect(baza +'.db')  #połączenie
    cur =con.cursor() #obiekt kursora
    
    kwerenda1(cur)
    
    con.commit()
    con.close()
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))