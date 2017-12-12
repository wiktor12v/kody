/*
 * silnia.cpp
 * 
 */


#include <iostream>
using namespace std;

int silnia_rek(int n)
 {
 	if(n<2)
        return 1;
 	return silnia_rek(n-1) * n;
 }
 
 
   
int main(int argc, char **argv)
{
    int n=0;
	cout<<"podaj liczbe"<<endl;
    cin>>n;
     cout<<"Wynik_rek: "<<silnia_rek(n);
	return 0;
}

