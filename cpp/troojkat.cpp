/*
 * troojkat.cpp
 * program pobiera 3 boki trójkąta
 * sprawdza czy da się z nich zbudować trójkąt
 * oblicza obówd i pole (ze wzoru herona
 * i drukuje na ekranie odpowedni komunikat
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    int a,b,c;
    int obwod = 0;
    float P = 0;
    float pole = 0;
    a = b = c =0;
    
    
        cout <<"podaj trzy boki trójkąta";
        cin >> a>> b>>c;
    if ( a +b >c && b+c>a && a+c>a)
    {
    cout<<"Można zbudowac! " <<a+b+c<<endl; 
    obwod = a+b+c;
    cout << "obwod:" << obwod<<endl;
    
    P= 0.5 * obwod;
    pole=sqrt(P*(P-a)*(P-b)*(P-c));
    cout<<"pole jest równe "<<pole;
    }    
    

      
    
    
    return 0;


}

