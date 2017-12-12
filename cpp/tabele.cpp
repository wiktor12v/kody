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
    int liczby[5];
    int i=0;
    int suma=0;
    int srednia=0;
    cout <<"podaj 5 ocen (0-6): "<<endl;
    for (i = 0; i<5; i++)
    {
        cin>>liczby[i];
        
    }
    
    cout<<"podane oceny: "<<endl;
    for(i = 0; i<5; i++)
    {
        cout << liczby[i]<<<< " ";
        suma+=liczby[i];
        srednia=suma/5;
    }
    cout<<endl<<"suma jest ronwa: "<<suma<<endl;
    cout<<endl<<"srednia jest ronwa: "<<float(suma)/float(5)<<endl;
    
    return 0;
}

