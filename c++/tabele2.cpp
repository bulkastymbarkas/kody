


#include <iostream>


using namespace std;


int main(int argc, char **argv)
{
    //const int rozmiar = 5;
    int rozmiar = 0 ;
    cout <<"Ile ocen :" <<endl ;
    cin >> rozmiar ;
    
    int liczby[rozmiar];
    int suma = 0 ;
    
    cout <<"Podaj pięć ocen (0-6) :" << endl ;
    for(int i = 0; i < rozmiar; i++ ) 
    {
    cin >> liczby [i];
    }
    
    
    cout << "Podane oceny :" << endl ;
    for(int i = 0; i < rozmiar; i++ ) 
    {
    suma +=liczby[i]  ;   
    
    cout <<liczby[i] << endl ;
    }
    cout <<"suma ocen :" << suma <<endl ;
    cout <<"Średnia arytmetyczna:" << float (suma)/float (5) << endl ;
	return 0;
}

