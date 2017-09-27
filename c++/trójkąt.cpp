/*
 * trójkąt.cpp
 *Program pobiera trzy boki trójkąta
 * Sprawdza czy da się z nich zbudować trójkąt
 * Oblicza pole i obwód (ze wzoru Herona )
 * Drukuje na ekranie odpowiedni komunikat  
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a,b,c ;
    a = b = c = 0 ;
    cout << "Podaj trzy boki trójkąta: " ;
    cin >> a >> b >> c ;
    if (a + b > c && b + c > a && a + c > b)
    {
        cout <<"Obwód trójkąta: " << a + b + c << endl;
    }
    
	return 0;
}

