/*
 *
 */


#include <iostream>
using namespace std;
 int fib[10000]; int n;

int main(int argc, char **argv)
{
	cout<<"Ile liczb fibonacciego mam podac?: ";
    cin>>n;
    fib[0] =1 ;
    fib [1] = 1;
   
    for(int i=2; i<n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }    
    
	
    for(int i=0; i<n;i++)
    {
        cout<<endl<< "wyraz nr"<<i+1<<": "<<fib[i];
    }    
    
	return 0;
}

