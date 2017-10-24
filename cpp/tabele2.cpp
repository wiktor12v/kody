/*
 * tabele.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int ROZMIAR=0;
    cout<<"ile ocen?: " <<endl;
    cin>>ROZMIAR;
    
    
    int liczby[ROZMIAR];
    int i=0;
    int suma=0;
    //int srednia=0;
    cout <<"podaj 5 ocen (0-6): "<<endl;
    for (i = 0; i<ROZMIAR; i++)
    {
        cin>>liczby[i];
        
    }
    
    cout<<"podane oceny: "<<endl;
    for(i = 0; i<ROZMIAR; i++)
    {
        cout << liczby[i]<< " ";
        suma+=liczby[i];
        
    }
    cout<<endl<<"suma jest ronwa: "<<suma<<endl;
    cout<<endl<<"srednia jest ronwa: "<<float(suma)/float(ROZMIAR)<<endl;
    
    return 0;
}

