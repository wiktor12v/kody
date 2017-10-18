/*
 * funkcje.cpp
 * 
 */


#include <iostream>

using namespace std;

void dodaj(int a, int b)//nie zwraca wyniku
{
cout <<"suma: "<<a+b;
}

int odejmij(int l1, int l2) 
{
  return l1-l2;  
 }   
 int mnoz(int g, int c)
 {
   return g*c;
  }   
  int dziel( int r, int t)
  {
      if(t==0)
      {
          cout<<"nie dziel przez 0!"<<endl;
      }
          return 0;
    }
int main(int argc, char **argv)
{
    int a, b;
    a = b = 0;
    

    cout<<"podaj w liczby: "<<endl;
    cin>>a>>b;
    
    dodaj(a,b);//wywolanie funkcji
    cout<<endl<<"różnica: "<< odejmij(a,b)<<endl;
    cout<<"iloczyn: "<< mnoz(a,b)<<endl;
    
    return 0;
    
}

