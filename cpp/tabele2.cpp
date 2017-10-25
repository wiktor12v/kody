/*
 * tabele.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

void pobierzDane(int tab[],int ile)
{


    int i;
    cout <<"podaj "<< ile << "liczb: " << endl;
    for (i = 0; i<ile; i++)
    {
        cin>>tab[i];
        
    }
}
int sumuj(int tab[], int ile)
    {
int suma=0;
for (int i = 0; i<ile; i++)
{
    suma+=tab[i];
}
return suma;
    }
float liczsrednia(int tab[], int ile)
{
    return sumuj(tab, ile)/float(ile);
 
 
}
int main(int argc, char **argv)
{
    int ROZMIAR=0;
    cout<<"ile ocen?: " <<endl;
    cin>>ROZMIAR;
    
    
    int liczby[ROZMIAR];
    //int i=0;
    //int sumuj=0;

    pobierzDane(liczby, ROZMIAR);
    cout<<"suma wynosi: " <<sumuj(liczby, ROZMIAR)<<endl;
    cout<<"srednia wynosi: "<<liczsrednia(liczby, ROZMIAR)<<endl;
    
    return 0;

}
