/*
 * funkcje.cpp
 * 
 */


#include <iostream>

using namespace std;

//int liczba=0;//zmienna globalna(dostepna w kazdej funkcji)
//int krok=0;
//~void zwieksz1()
//~{
    //~liczba  += krok;
//~}
void zwieksz2(int liczba, int krok)//przekazywanie przez wartosc
{
    liczba  += krok;
    cout<<"liczba: " <<liczba<<endl;
    cout<< &liczba << " "<< &krok<<endl;
}
void zwieksz3(int &liczba, int &krok)//przekazywanie przez wartosc
{
    liczba  += krok;
    cout<<"liczba: " <<liczba<<endl;
}


    
int main(int argc, char **argv)
{
   int liczba, krok;//zmienne lokalne
   liczba = krok = 0;
   
    cout<<"podaj liczbe i  krok: "<<endl;
    cin>> liczba;
    cin>>krok;
    cout<< &liczba << " "<< &krok<<endl;
    
    zwieksz2(liczba, krok);
    zwieksz2(liczba, krok);
    zwieksz2(liczba, krok);
    
    cout<<"liczba: "<<liczba<<endl;
    cout<<"krok: "<<krok<<endl;
    
    return 0;
    
}

