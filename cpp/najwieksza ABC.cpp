/*
 * Pobierz TRZY liczby całkowite od użytkownika i wydrukuj więkzą
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)

{
	int a, b, c;
    a = b = c = 0;
    cout << "podaj TRZY liczby" ;
    cin >> a >> b >> c;
    
    if (a > b && a > c)
    { 
    if (a > c)
            cout << "najwieksza a= " <<a;
        
    }
    
     if (b > a && b > c)
    {
    cout <<"najwieksze b= " << b;
    }
   { if ( c > a && c > b)  
       cout <<"najwieksza jest c=" << c; 
    }
    if (a == b && b > c)
    {
        cout <<"największa jest a="<<a<<" i b="<<b<< endl;
     }   
    if (a ==b && b== c)
    {
        cout << "wszystkie są równe= " << a;
    }
	 if (a==c && a > b)
     {
         cout <<"największymi liczbami są a= "<<a<<" i c=" <<c<<endl;
     }
     
     
     return 0;

}

