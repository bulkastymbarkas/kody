


#include <iostream>


using namespace std;


int main(int argc, char **argv)
{

    int liczby[5];
    int suma = 0 ;
    
    cout <<"Podaj pięć ocen (0-6) :" << endl ;
    for(int i = 0; i < 5; i++ ) 
    {
    cin >> liczby [i];
    }
    
    
    cout << "Podane oceny :" << endl ;
    for(int i = 0; i < 5; i++ ) 
    {
    suma +=liczby[i]  ;   
    
    cout <<liczby[i] << endl ;
    }
    cout <<"suma ocen :" << suma <<endl ;
    cout <<"Średnia arytmetyczna:" << float (suma)/float (5) << endl ;
	return 0;
}

