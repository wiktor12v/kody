/*
 * 
 * 
 */


#include <iostream>
using namespace std;

void sort(int tab[], int n)
{
    int el=0;
    int k=0;
  for( int i=1;i<n;i++)
    {
    el= tab[i];
    k = i-1;
        while( k>=0 && tab[k] >el)
            {
                tab[k+1] = tab[k];
                k -= 1;
                tab[k+1] = el;
    
            }
    
    }   
}
void drukuj(int tab[], int ile)
{
     for(int i=0; i<ile; i++)
     {
         cout<<tab[i]<<" ";
     }  
}    

int main(int argc, char **argv)
{
	int tab[10];
    tab[0]=3;
    tab[1]=4;
    tab[2]=7;
    tab[3]=2;
    tab[4]=1;
    tab[5]=5;
    tab[6]=8;
    tab[7]=9;
    tab[8]=45;
    tab[9]=34;
    int ile=10;
    
   drukuj(tab, ile);
   cout<<endl;
    sort(tab, ile);
    drukuj(tab, ile);
     
	return 0;
}

