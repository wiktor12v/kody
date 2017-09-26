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
    
    if (a > b)
    { 
        if (a > c)
            cout << "najwieksza a= " <<a;
        else 
            cout << "najwieksza c=" << c;
    }
    else if (b > a)
    {
    if (b > c);
    cout <<"najwieksze b= " << b;
    }
	 return 0;

}

