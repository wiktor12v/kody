/*
 * struktury.cpp
 * 
 * Copyright 2019  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <fstream>
using namespace std;

struct osoba {
    char imie[20];
    char nazwisko[20];
    int wiek;
};

void drukujOsoby(osoba tb[], int ile)
{
    for(int i=0; i <ile;i++) {
     cout<<"Podano: " <<tb[i].imie<< " "
         <<tb[i].nazwisko << " "<<tb[i].wiek<<endl;
     }
    }
void getOsoby(osoba tb[], int ile)
{
    for(int i=0; i <ile;i++)
    {
    osoba uczen;
    cout<< "Podaj imę: ";
    cin>>uczen.imie;	
     cout<< "Podaj nazwisko: ";
    cin>>uczen.nazwisko;	
    cout<< "Podaj wiek: ";
    cin>>uczen.wiek;	
    tb[i] = uczen;
    cin.ignore(1);
    }
    

 }
 
 void zapiszOsoby(osoba tb[], int ile){
     ofstream plik;
     plik.open("osoby.txt");
     for(int i=0; i <ile;i++) {
      plik <<tb[i].imie<< " "
         <<tb[i].nazwisko << " "<<tb[i].wiek<<endl;
         
     }
    plik.close();
    cout<<"zapisano"<<endl; 
   }
int main(int argc, char **argv)
{
    int ile = 2;
    osoba tb[ile];
    getOsoby(tb,ile);
    drukujOsoby(tb,ile);
    zapiszOsoby(tb,ile);
    
    

	return 0;
}

