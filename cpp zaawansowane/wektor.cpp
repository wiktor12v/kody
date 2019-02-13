/*
 * wektor.cpp
 * 
 * 
 */
//napisz program wektor.cpp, który:
//1)pobiera  od uzytkownika wspolrzedne punkty początkowego i koncowego
//2) oblicza wspolrzedne srodka tego wektora
//użyj dwoch struktur:
//punkt - do przechowywania współrzednych punktu
//wektor - do przechowywania wspólrzednych punktu początkowego i koncowego wektora
#include <iostream>
#include <fstream>
 
using namespace std;
 
struct punkt
{
    int x;
    int y;
};
 
struct wektor
{
    punkt pp;
    punkt pk;
   
};
 
punkt wylicz_srodek(wektor w) {
    
    punkt srodek;
     srodek.x = (w.pp.x+w.pk.x)/2;      
     srodek.y = (w.pp.y+w.pk.y)/2;      
    return srodek;
   
}
 
 
 
wektor getWektor() {
    wektor w1;
    cout << "Podaj x, y punktu poczatkowego: ";
    cin >> w1.pp.x;
    cin >> w1.pp.y;
    cout << "Podaj x, y punktu końcowego: ";
    cin >> w1.pk.x;
    cin >> w1.pk.y;
 
   
    return w1;
   
}
 
 
 
int main(int argc, char **argv)
{
    wektor w;
    punkt srodek;
    w = getWektor();
    
        return 0;
}
