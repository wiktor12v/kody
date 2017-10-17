/*
 * petle_switch.cpp
 progrem pobiera numer miesiąca i wyświetla jego nazwę
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    char zn='t';
    
    while (zn=='t' || zn=='T' || zn=='n' || zn=='N') 
    {
        cout<<"podaj znak: ";
        cin>>zn;
       // if (zn=='t' || zn=='T' || zn=='n' || zn=='N')
        cout<<zn<<endl;
        //else   
        //break;
     
    }
   cout<<"brawo zgadles no i z czego sie kurwa cieszysz debilu jebany";
    
    return 0;
}

