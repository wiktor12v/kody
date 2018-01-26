/*
 * dec2bin.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    char znakA='A';
    char znakB='B';
    int l14=14;
    int l15= 15;
    cout<<(int)znakA<<(int)znakB<<endl;
    cout<<(char)15<< (char)15<<endl;
    //dane wejsciowe
    
    int reszty[16];
	int liczba = 0;
    int podstawa = 0;
    // 120 - 64 = 56
    // 56 - 32 = 24
    // 24 - 16= 8
    //8 -8 =0
    //1111000
    cout<<"podaj liczbe i podstawe: ";
    cin>> liczba;
    cin>> podstawa;
    //algorytm
    int i=0;
    do{
    reszty[i]=liczba%podstawa;
        liczba = liczba/podstawa;
        i++;
    
    }while(liczba>0); //petla wykona sie chociaz raz
    
    //~for(int j=i-1; j>=0; j--){
        
        //~cout<<reszty[j];
        
    //~}
    i--;
    while(i >= 0)
    {
        cout<<reszty[i];
        
        i--;
     }   
    
    
    
   
    
    
	return 0;
}

