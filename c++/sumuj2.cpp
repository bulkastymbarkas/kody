

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	
    int suma = 0 ;
    int liczba = 0 ;
    
    for (;;) //pętla nieskończona 
    {
    
    cout <<"Podaj liczbe : " << endl ;
    cin >> liczba ;
    suma += liczba ;
    if ( suma < 100 ) break;
    //suma = suma + liczba ;
    
    }
    cout << "Suma: " << suma << endl ;
	return 0;
}
