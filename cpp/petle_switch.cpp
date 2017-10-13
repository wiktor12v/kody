/*
 * petle_switch.cpp
 progrem pobiera numer miesiąca i wyświetla jego nazwę
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int m = 0;
    
    //while (true)
    //{
        //cout<<"podaj miesiąc: ";
        //cin>>m;
        //if (m<13 && m>0)
        //break;
    //}
    //cout<<"miesiąc: "<<m<<endl;
    while (m > 12 || m < 1) 
    {
        cout<<"podaj miesiąc(1-12): ";
        cin>>m;
     }  
    //}
    //if (m==1)
        //cout<<"styczen"<<endl;
    //else if (m==2)
        //cout<<"luty XD"<<endl;
    switch(m)
    {
    case 1:
        cout<<"styczeń";
        break;
    case 2:
        cout<<"luty";
        break;
    case 3:
        cout<<"marzec";
        break;
    case 4:
        cout<<"kwiecen";
        break;
        
        
    }
    return 0;
}

