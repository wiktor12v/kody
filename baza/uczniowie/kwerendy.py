#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy.py
#  

import sqlite3 

def kwerenda1(cur):
    
    cur.execute("""
        SELECT klasa, przedmiot, AVG(ocena) FROM oceny
        INNER JOIN przedmioty ON przedmioty.id=oceny.id_przedmiot
        INNER JOIN uczniowie ON uczniowie.id=oceny.id_uczen
        INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
        WHERE przedmiot ='matematyka'
        GROUP BY klasa
        ORDER BY AVG(OCENA) DESC
         
        
    
                 """)
                 
    #SELECT przedmiot, AVG(ocena) AS srednia FROM oceny
    #INNER JOIN przedmioty ON przedmioty.id=oceny.id_przedmiot
    #GROUP BY przedmiot
    #ORDER BY srednia DESC            (SREDNIA Z KAZDEGO PRZEDMIOTU)
                 
                 
                 
                 
                 
                 #WITH srednie AS (
    #    #SELECT imie, nazwisko, ocena  FROM uczniowie
    #INNER JOIN  oceny ON uczniowie.id=oceny.id_uczen           
    #SELECT  nazwisko, imie, klasa  FROM uczniowie
    #INNER JOIN klasy ON uczniowie.id _klasa=klasy.id             
    #SELECT COUNT(id) FROM uczniowie
    #WHERE egz_mat > (SELECT AVG(egz_mat) FROM uczniowie)             
    #SELECT plec, AVG(egz_mat),AVG(egz_hum) FROM uczniowie
    #GROUP BY plec
    #SELECT COUNT(id) FROM uczniowie
    #WHERE egz_mat >40 AND egz_hum <40         
    #SELECT nazwisko, egz_mat, egz_hum FROM uczniowie
    #WHERE egz_hum >40
    #ORDER BY egz_mat DESC
    #LIMIT 5        
    #WHERE egz_mat > 40 AND egz_hum >40
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
