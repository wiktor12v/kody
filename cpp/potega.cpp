/*
 * hello.cpp
 */
 
#include <iostream>
#include <math.h>

using namespace std;

float poteguj(float a, float n)
{
 	if(n == 0)
 		return 1;
 	return poteguj(a, n-1) * a;
 }


int main(int argc, char **argv)
{
   cout<<"podaj podstawe"<<endl;
    int a;
    cin>>a;
    cout<<"podaj wykladnik"<<endl;
    int n;
     cin>>n;
   
    cout<<poteguj(a,n);
   
    
    
	return 0;
}




