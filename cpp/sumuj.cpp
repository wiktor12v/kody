/*
 *sumuj.cpp
 * 
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)



{
    
    int i; // zmienna literacyjna
    int suma = 0; //suma kolejnch liczb
    int liczba = 0; //liczba wprowadzana
    int ile_razy = 0;
       
      cout <<"ile liczb podasz?"; 
      cin>>ile_razy;
    for (i =0 ; i < ile_razy; i++)
    
    {

        
        cout <<"podaj liczbe: ";
        cin  >> liczba;
        //suma = suma + liczba;
        suma += liczba;
    }
    cout << "suma: " <<suma <<endl;
    
    
    return 0;
}

