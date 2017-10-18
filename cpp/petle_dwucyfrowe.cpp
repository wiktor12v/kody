/*
 * 
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n=0;
    int m=0;
    
   
    
    while(m<10 || n>99 || m>n){
    cout<<"podaje pierwsza liczbe: ";
    cin>>m;
    cout<<"podaj druga liczbe: ";
    cin>>n;
    }
    while(m<=n){
    if(m%2==0 && m%3==0)
    {
        cout<<m<<endl;
     }
     m++;   
}
    
    return 0;
}

