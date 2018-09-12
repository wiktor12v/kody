/*
 * kalkulator.cxx
 * Copyright 2017  <>
 */


#include <iostream>
using namespace std;


float dodaj(float a, float b)
{
    
 return a +b;   
}    
float odejmij(float a, float b)
{
    
 return a -b;   
}    
float mnoz(float a, float b)
{
    
 return a *b;   
}    
float dziel(float a, float b)
{
    
 return a /b;   
}    

int main(int argc, char **argv)
{
    char znak; // +, -, *,/
    int a=0;
    int b=0;
    for(;;)
    {
    cout <<"podaj pierwszą liczbę: ";
    cin>>a;
    cout<<"podaj druga liczbe: ";
    cin>>b;
    cout<<"podaj znak działania: ";
    cin>> znak;
    
    while( znak == '/' && b == 0)
    {
        cout<<"podaj druga liczbe: ";
        cin>>b;
    }
    if (znak =='+')
    {
        cout<<"suma dwoch liczb= "<<dodaj(a,b)<<endl;
    }
    
    if (znak =='-')
    {
        cout<<"różnica dwoch liczb= "<<odejmij(a,b)<<endl;    
    }   
    if (znak =='*')
    {
        cout<<"iloczyn dwoch liczb= "<<mnoz(a,b)<<endl;   
    }
    
    if (znak =='/')
    {
        cout<<"iloraz dwoch liczb= "<<dziel(a,b)<<endl;
    }
   if(znak == '0')
        break;
}
    return 0;
}

