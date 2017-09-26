/*
 * Pobierz dwie liczby całkowite od użytkownika i wydrukuj więkzą
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)

{
	int a, b;
    a = b = 0;
    cout << "podaj dwie liczby" ;
    cin >> a >> b;
    
    if (a > b)
     
    { 
    cout << "większe a";
    cout << a;
    } else if (b > a)
    {
    
    {
    cout << "wieksze b=";
    cout << b;
   }//   else if (a--b)
    
{
    cout << "Równe, a= " << a << " , b= " << b;
}



	return 0;
    


