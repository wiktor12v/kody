/*
 * fibonacci .cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;
int fib_rek(int n)
 {
     if(n<2)
     {
        return 1;
     }
    else return fib_rek(n-2) + fib_rek(n-1);
 }





int main(int argc, char **argv)
{
    int n;
	cout<<" ile liczb mam wymienic? ";
    cin>>n;
   cout<<"wynik wynosi: "<<fib_rek(n);
    

    
	return 0;
}

