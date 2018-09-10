/*
 * kalkulator.cxx
 * Copyright 2017  <>
 */


#include <iostream>
using namespace std;

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
        cout<<"suma dwoch liczb= "<<a+b;
    }
    
    if (znak =='-')
    {
        cout<<"różnica dwoch liczb= "<<a-b;    
    }   
    if (znak =='*')
    {
        cout<<"iloczyn dwoch liczb= "<<a*b;   
    }
    
    if (znak =='/')
    {
        cout<<"iloraz dwoch liczb= "<<a/b;
    }
   if(znak == '0')
        break;
}
    return 0;
}

