/*
 * tabliczka3kl.cpp
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int liczby[20];
    srand(time(NULL));
    int parzyste = 0;
    
    for(int i=0; i<20;i++)
    {
     liczby[i] = rand() %100;
    }   
    for(int i=0; i<20;i++)
    {
       cout<< liczby[i]<<endl;
       if(liczby[i] % 2 ==0)
       {
        parzyste++;   
    }
    }
    cout<<"ilosc parzytych: "<<parzyste; 
    
    
    
    
    
    
	return 0;
}

