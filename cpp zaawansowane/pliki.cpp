/*
 * pliki.cpp
 */

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

int liczznaki(char plik[]) 
{
    ifstream  wejscie(plik);
    if (!wejscie) {cout<<"błąd otwarcia pliku!"; return 0;}
    char plik2[15];
    strcpy(plik2, plik);
    char *wsk;
    wsk = strstr(plik2,".txt");
    strncpy(wsk, ".bak", 4);
    ofstream wyjscie(plik2);
    if (!wyjscie) {cout<<"błąd otwarcia pliku!"; return 0;}
    
    
    char z; //pojedynczy odczytany znak
    int ile, ileal, ilenum, ilealnum, ilewierszy;
    ile=ileal=ilenum=ilealnum =ilewierszy=0;
    
    while(!wejscie.eof()) {
        wejscie.get(z); // odczytanie pojedynczego znaku
        if (wejscie) {
            
        ile++;
        if (isalpha(z)) ileal++;
        if (isdigit(z)) ilenum++;
        if (isalnum(z)) {
            ilealnum++;
            wyjscie.put(z);
        }
        int ascii = int(z);
        if(ascii==13) ilewierszy++; //zamiana char na int a 13 wyraz to koniec wiersza
    }
}    
    wejscie.close(); wyjscie.close();
    cout<<setw(10)<<"Znaków"<<ile<<endl;
    cout<<setw(10)<<"Liter"<<ileal<<endl;
    cout<<setw(10)<<"Cyfr"<<ilenum<<endl;
    cout<<setw(10)<<"Alfnum"<<ilealnum<<endl;
    cout<<setw(10)<<"Wierszy"<<ilewierszy<<endl;
    return ile;
    }
       
int sumuj(char plik[])
{
    ifstream  wejscie(plik);
    if (!wejscie) {cout<<"błąd otwarcia pliku!"; return 0;}  
    float liczba =0;
    float suma =0;
    
    while(!wejscie.eof()) {
    wejscie>>liczba;    
    suma += liczba;
    }
    wejscie.close();
    cout<<"Suma: "<<suma<<endl;
    return suma;
    
}


int main(int argc, char **argv)
{
    char nazwa[15];
    cout << "Podaj nazwę pliku: ";
    cin >> nazwa;
    liczznaki(nazwa);
    sumuj(nazwa);
    return 0;
}

