#!/usr/bin/env python
# -*- coding: utf-8 -*-
#a0=1 dla
#a1=a
#an= a * ... * a (n-czynników) dla N+ - {1,0}

def potega_it(podst, wykladnik):
    """Funkcja oblicza iteracyjnie potęge l.naturalnej"""
    wynik = 1
    for i in range(wykladnik):
        wynik *= podst
    return wynik
# a0= 1 -warunek brzegowy
# an = a(n -1) * a dla n > 0
def potega_rek(a, n):
    if n == 0:
        return 1 
    return potega_rek(a, n - 1) * a


# potega_rek(x, 0) = 1 dla x różnego od 0
# potega_rek(x, n) = potega_rek(x, n-1) * x dla n = N+
def potega_rek(x, n):
    if x == 0:
        return 0
    elif n == 0:
        return 1
    return potega_rek(x, n - 1) * x

def main(args):
#pobierz od użytkownika podstawe i wykładnik i przypisz do odpowiednich zmiennych
    podst = int(input("Podaj podstawe:"))
    wykladnik = int(input("Podaj wykładnik:"))
    print("Potęga =", potega_it(podst,wykladnik))
    #wynik = potega_it(podst, wynik)
    #print("potega=", wynik)
    assert type(podst)==int
    assert type(wykladnik)==int
    assert potega_it(100,0)== 1
    assert potega_it(100,1)== 100
    assert potega_it(2,3)==8
<<<<<<< HEAD
    assert potega_rek(2,3)==8
=======
    assert potega_rek(100,1)==100
>>>>>>> 51a3691c40686ff2803dbbc2fad6537f1ae0f601
    return 0
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
