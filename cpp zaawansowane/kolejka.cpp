/*
 * stos.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;

int rozmiar=3;
int dane[3];
int head = 0;
int tail=0;
int ile=0;



void pop() {
    if (ile==0){
        cout<<"kolejka pusta ;/"<<endl;
        head=tail=0;
    } else{
        
        cout<<dane[head]<<endl;
        tail=head;
        head++;
        ile--;
    }
}

void push() {
    if (ile>=rozmiar){
        
        cout<<"kolejka pełna"<<endl;
    
    }else  {
        cout <<"Podaj wartość:"<<endl;;
        cin>>dane[tail];
        tail++;
        ile++;
           } 
    }

int main(int argc, char **argv)
{
	push();
	push();
    push();
    push();
    
    pop();
    pop();
    pop();
    pop();
    
    push();
    pop();
	return 0;
}

