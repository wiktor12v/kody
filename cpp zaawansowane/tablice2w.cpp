/*
 * tablice2w.cpp
 */


#include <iostream>
#include <iomanip>
using namespace std;

void wprowadz(float tab[], int ile){
    
    for (int i=0; i <ile; i++){
        cout<<"ocena: "<<endl;
        cin >> *(tab+i);
    }
    
}

void drukuj(float tab[], int ile){
    
    for (int i=0; i <ile; i++){
        cout<< *(tab+i)<< " ";
    }
    cout<<endl;
}

void wypelnij2W(int **tab,int w, int k){
    
    srand(time(NULL));
    for(int i=0; i<w; i++)
        for(int j=0; j<k;j++)
            tab[i][j]= rand()%101;
}
void drukuj2W(int **tab,int w, int k){
    
        for(int i=0; i<w; i++) {
            for(int j=0; j<k;j++)
            cout << setw(5) << tab[i][j];
       
        cout<<endl;  
        }
}




int tab2W() {
    int w, k;
    cout<< "Liczba wierszy i kolumn: "<<endl;
    cin >>w>>k;


    int **tab; //wskaznik do wskaznika

    try {
        tab = new int *[w];
        
        } 
    catch(bad_alloc){
        cout<<"za mało pamięci."<<endl;
        return 1;    
            
         }
         
     for (int i =0; i<w; i++){
         
       try {
        tab[i] = new int [k];
        
        } 
    catch(bad_alloc){
        cout<<"za mało pamięci."<<endl;
        return 1;    
            
         }
               
      }   
      
    wypelnij2W(tab,w,k);
    drukuj2W(tab,w,k);  
    return 0;
    }



int tab1W(){
    
    float *tab= NULL;
    int ile;
    cout<<"ile podasz liczb?"<<endl;
    cin>> ile;
    try {
        tab = new float[ile];
        
        } 
    catch(bad_alloc){
        cout<<"za mało pamięci."<<endl;
        return 1;    
            
         }
         
    wprowadz(tab,ile);
    drukuj(tab,ile);
    return 0;         
}

int main(int argc, char **argv)
{

    tab2W();
	
	return 0;
}

