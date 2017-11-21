#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    double liczba, potega;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Do ktorej potegi podniesc liczbe " << liczba << "? Wpisz wartosc: ";
    cin >> potega;
    cout << "pow(" << liczba << "," << potega << ")=" << pow( liczba, potega ) << endl;
    getch();
    return( 0 );
}


