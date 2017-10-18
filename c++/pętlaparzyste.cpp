// napisz program który wypisuje wszystkie liczby parzyste podzielne przez 3 w zakresie podanym przez użytkownika <m,n>


#include <iostream>
#include <cmath>
int main(int argc, char **argv)
{
    int m=0 ;
    int n=0 ;
    cout << "Podaj zakres <m,n> :" << endl;
    cin >> m >> n ;
    while (m > 10 || n < 99 ) {
        cout << "Podaj zakres <m,n > <10 ,99> : " << endl ; 
	cin >> m >> n ;
	return 0;
}

