/*
 *sumuj.cpp
 * 
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)



{
    
    //int i; // zmienna literacyjna
    int suma = 0; //suma kolejnch liczb
    int liczba = 0; //liczba wprowadzana
           

    for(;;)//pętla nieskonczona
    
    {

        
        cout <<"podaj liczbe: ";
        cin  >> liczba;
        //suma = suma + liczba;
        suma += liczba;
        if (suma> 100) break;
        
    }
    cout << "suma: " <<suma <<endl;
    
    
    return 0;
}

