#!/usr/bin/env python
# -*- coding: utf-8 -*-


class Osoba():
    """Prosta klasa opisująca osobę """

    def __init__(self, imie, nazwisko, hp):
        self.imie = imie
        self.nazwisko = nazwisko
        self.ustawPlec(imie)
        self.hp = hp

    def ustawPlec(self, imie):
        if imie[-1] == "a":
            self.__plec = "k"
            self.__atak = 3
            self.__blok = 1
        else:
            self.__plec = "m"
            self.__atak = 5
            self.__blok = 2

    def atakuj(self, osoba):

        osoba.blokuj(self.__atak)

    def blokuj(self, atak):
        self.hp -= (atak - self.__blok)
        if self.hp < 1:
            print("im dead")
        else:
            print("im still alive")


jakub = Osoba('kuba', 'Gwizd', 10)
jakub.wzrost = 170
print(jakub.__dict__)
exit()

jakub.ustawPlec("Kubuś")
print(jakub.nazwisko,  jakub.hp)












print("combat: ")
jakub.atakuj(michal)
michal.atakuj(jakub)
print(jakub.hp, michal.hp)
jakub.atakuj(michal)
jakub.atakuj(michal)
jakub.atakuj(michal)
jakub.atakuj(michal)
jakub.atakuj(michal)
jakub.atakuj(michal)
jakub.atakuj(michal)
jakub.atakuj(michal)
jakub.atakuj(michal)
jakub.atakuj(michal)
