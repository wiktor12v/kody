#!/usr/bin/env python
# -*- coding: utf-8 -*-


def fib_iter(n):
    """funckja wyswietla kolejne wyrazy ciagu fibonacciego.
funkcja zwraca n-ty wyraz ciągu
f(0)=0
f(1)=1
f(n)= f(n-2) + f(n-1) dla n > 1
    """
    a, b = (0, 1)
    if n == 0:
        print (a)
        return a
    elif n == 1:
        print (b)
        return b


    print(a)
    print(b)
    for i in range(2, n):
        tmp = b
        b = a + b
        a = tmp
        print(a, "wyraz ",i,":", b, "iloraz: ",b/a)

    return b

def fib_iter2(n):
    a, b =(0,1)
    print(a)

    while n > 0:
        a, b = b, a + b

        print(a, "wyraz ", b, "iloraz: ",b/a)



def main(args):
    fib_iter2(20)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
