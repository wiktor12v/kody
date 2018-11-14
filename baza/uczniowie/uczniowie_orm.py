#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  klasa_uczen.py

import os
from peewee import *

baza_plik = 'uczniowie_orm.db'
baza = SqliteDatabase(baza_plik) #instancja wykorzystywanej bazy


    ###MODELE      #################
class BazaModel(Model):
    class Meta:
        database =baza
 
class Klasa(BazaModel):
    
    klasa =CharField(null=False)
    rok_naboru= ItegerField(default=0)
    rok_matury= IntegerField(default=0)
        
class Uczen(BazaModel):
    imie =CharField(null= False)    
    nazwisko =CharField(null= False)    
    plec = BooleanField()
    klasa = ForeignKeyField(Klasa, related_name='uczniowie')
    id_klasa =IntegerField(default =0)
    egzhuman = FloatField(default=0)    
    egzmat = FloatField(default=0)    
    egzjez = FloatField(default=0) 
    klasa= foreignKeyField(Klasa, related_name ='uczniowie')
    

    
    
class Przedmiot(BazaModel):
    przedmiot =CharField(Null=False)
    imie_naucz= CharField(Null=False)
    nazwisko_naucz=CharField(Null=False)
    plec_naucz=BooleanField()
 
class Ocena(BazaModel):
    id= IntegerField(default=0)
    datad=DateField()
    id_uczen =IntegerField(null=False)
    id_przedmiot= IntegerField(null=false) 
    ocena= DecimalField(null=False)
    uczen= ForeignKeyField(Uczen, Related_name='oceny')
    przedmiot = ForeignKeyField(klasa, related_name='oceny')
       
    

def main(args):
    
    if os.path.exists(baza_plik):
        os.remove(baza_plik)
    baza.connect() #nawiazwywanie polaczenia z baza
    baza.create_tables([Klasa, Uczen, Przedmiot, Ocena]) 
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
