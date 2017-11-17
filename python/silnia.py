#!/usr/bin/env python
# -*- coding: utf-8 -*-
#n! = 1 dla {0, 1}
# n! = 1*2 .... *n dla N+ - {0, 1}
def silnia_it(a):
    """Funkcja oblicza iteracyjnie silnie l.naturalnej"""
    wynik = 1
    for i in range(2,n+1):
        wynik *= i
    return wynik

def main(args):
#pobierz od użytkownika podstawe i wykładnik i przypisz do odpowiednich zmiennych
    a = int(input("Podaj liczbe:"))

    assert silnia_it(a)== int
    assert silnia_it(0)== 1
    assert silnia_it(1)== 1
    assert silnia_it(7)==5040
    return 0
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
