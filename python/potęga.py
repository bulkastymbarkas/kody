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
    return 0
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
