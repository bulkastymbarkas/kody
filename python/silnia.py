#!/usr/bin/env python
# -*- coding: utf-8 -*-
<<<<<<< HEAD
#n! = 1 dla {0, 1}
# n! = 1*2 .... *n dla N+ - {0, 1}

def silnia_rek(n):
    if n < 2:
        return 1 
    return silnia_rek(n - 1) * n

def silnia_it(n):
    """Funkcja oblicza iteracyjnie silnie l.naturalnej"""
=======
#
#  silnia.py
  
def silnia(n):    
>>>>>>> 51a3691c40686ff2803dbbc2fad6537f1ae0f601
    wynik = 1
    for i in range(2, n+1):
        wynik = wynik * i
        
    return wynik

def silnia_rek(n):
    if n < 2:
        return 1
    return n * silnia_rek(n - 1)  

<<<<<<< HEAD

    assert type(a) == int 
    assert silnia_it(0)== 1
    assert silnia_it(1)== 1
    assert silnia_it(7)==5040
    assert silnia_rek(7)==5040
    print ("silnia = ", silnia_rek(a))
    
=======
def main(args):
    n = int(input("Podaj wykładnik silni: "))
    assert type(n) == int
    assert silnia(0) == 1
    assert silnia(5) == 120 
    assert silnia_rek(7)==5040
    print('Wynik: ', silnia_rek(n))
>>>>>>> 51a3691c40686ff2803dbbc2fad6537f1ae0f601
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
