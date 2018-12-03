#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  bez nazwy.py
from math import sqrt

def main(args):
    a,b,c = eval(input("podaj boki trojkata oddzielone przecinkami: "))
    print('podano boki: {}, {}, {},'.format (a,b,c))
    trojkat= False
    
    if a + b > c:
        if a + c> b:
            if b +c>a:
                trojkat = True
    if trojkat:
        print('da sie zbudowac trojkat')          
        if(a*a + b*b == c*c  or a*a + b*b == c*c or b*b + c*c == a*a):
        
            print('trojkat jest prostakatny')     
                 
            p = 0.5*(a + b + c)
            pole = sqrt(p*(p-a)*(p-b)*(p-c))           
            print('pole {:.4f}'.format(pole)) 
        else:
            print('nie da sie zbudowac')
            
            
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
