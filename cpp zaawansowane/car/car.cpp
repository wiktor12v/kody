/*
 * car.cpp
 */
#include <iostream>
#include <cstdlib>
#include "car.h"
#include "osoba.h"

using namespace std;

Car::Car() {
    marka=model="";
    rocznik=przebieg=0;
}

Car::Car(string mr, string ml, int r, int p) {
    if (r <= 1990) r = 1990;
    marka = mr;
    model = ml;
    rocznik = r;
    przebieg = p;
}

void Car::dodaj() {
    cout << "Dodaj samochód:"<< endl;
    cout << "Marka: "; cin>>marka;
    cout << "Model: "; cin>>model;
    cout << "Rocznik: "; cin>>rocznik;
    cout << "Przebieg: "; cin>>przebieg;
}

void Car::dane() {
    cout << "\nTwoje piękne auto:"<< endl;
    cout << "Marka: " << marka << endl;
    cout << "Model: " << model << endl;
    cout << "Rocznik: " << rocznik << endl;
    cout << "Przebieg: " << przebieg << endl;
}

void  Car::laduj(int)
{
    
    for(int i=0; i<ileosob;i++)
        {
         Osoba o;   
         cout<<"podaj dane " <<i<<"osoby"<<endl;
         cout<<"imie: "; cin>>o.imie;
         cout<<"nazwisko: "; cin>>o.nazwisko;
         cout<<"plec: "; cin>>o.plec;
         cout<<"wiek: "; cin>>o.wiek;
         }
     }
     
void Car::pasazerowie()
{
    for(int i=0;i<ileosob;i++)
    {
    }
    
}
