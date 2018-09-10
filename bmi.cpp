/*
 * bmi.cpp
 * 
 *
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    float wzrost = 0;
    int waga = 0;
    float bmi = 0;
    cout<<"podaj wzrost: ";
    cin>> wzrost;
    cout<<"podaj swoja wage: ";
    cin>>waga;
    
    bmi = waga/(wzrost*wzrost);
    
    if(bmi>=30)
    {
        cout<<"otyłość";
    }    
    else if (bmi >= 25)
    {
    cout<<"nadwaga";    
    }   
    else if (bmi >= 18.5)
    {
        cout<<"norma";
    }
    else
    {
        cout<<"niedowaga";
    }
    cout<<bmi;        
	return 0;
}

