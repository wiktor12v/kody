/*
 * apetaj.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n=0;
    int i =2;
    do{
	cout<<"podaj n: "<<endl;
    cin>>n;
    }while(n<=3);
    
    while(i*i<=n)
    {
        if(n%i== 0)
        {
        cout<<"liczba zlozona"<<endl;
        return 0;
        }   
    i=i+2;
}
    cout<<"liczba pierwsza"<<endl;
	return 0;
}

