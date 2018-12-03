#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  


def main(args):
    
    m = int(input("podaj swoja mase: "))
    w = float(input("podaj wzrost w metrach: "))
    b = float(m/(w**2))
    print(b)
    
    if b > 30:
        print('otyłość')
    elif b> 25:
        print('nadwaga')
    elif b>18.6 and b < 24.9:
        print('norma') 
    elif b<18.5:
         print("niedowaga")

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
