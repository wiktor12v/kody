/*
 * horner.cpp
 * 
 */


#include <iostream>
using namespace std;
float horner_rek(k, tbwsp,x)
{
    if x==0:
        return tbwsp[3]
        
    return 
    
    
    
}


float horner_it(int stopien, float tbwsp[],float x)
{
    float wynik = tbwsp[0];
    for(int i=1;i<=stopien+1;i++)
    {
        wynik = wynik*x + tbwsp[i];
        
    }
    
    
    
    
    return wynik;
}


//w(x) = 2x^3+ 3x^2 +5x +4 (8)
//w(x) = x(2x^2 + 3x 5) +4 
//w(x) = x (x(2x+3) +5 )+4 (3)


int main(int argc, char **argv)
{
    int stopien = 3;
    float x;
    float tbwsp[4];
    
    
   
    cout<<"podaj argument: "<<endl;
    cin>>x;
    for (int i=0; i<4;i++)
    {
    cout<<"podaj wspolczynnik "<<i+1<<endl;
    cin>>tbwsp[i];
    }
    cout<<"wartosc wielomianu: "<<horner_it(stopien, tbwsp, x)<<endl;
    
   
	return 0;
}

