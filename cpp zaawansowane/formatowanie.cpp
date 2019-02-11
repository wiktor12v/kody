/*
 * formatowanie.cpp
 * 
 * Copyright 2019  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <iomanip>
#include <cstdio>
#include <math.h> // stała pi

using namespace std;
int main(int argc, char **argv)
{
    int lint= 30;
    float lrze= 22.5;
    
    //ios_base::fmtflags fx;
    //fx |= cout.hex;
    //fx |= cout.showbase;
    
    
    //cout.flags(fx);
    
    cout<< hex <<showbase;
    cout << lint<<endl;
    
	cout<<M_PI << endl;
    cout.precision(3);
    cout<<M_PI << endl;
    cout.width(20); //minimalna szerokosc pola w znakach.
    cout.fill('X'); //wypelnienie pola znaczikiem
    cout <<lint <<endl;
    
    cout <<setw(20)<<lrze <<endl;
    
    printf("%12.2f\n",10*M_PI);
    printf("Hex: %#x\n0ct: %#o\n",lint, lint);
    
    
    
	return 0;
}

