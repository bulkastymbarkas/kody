


#include <iostream>
#include <cmath>

using namespace std;

int sumuj(int tab[], int ile) {
    int suma=0;
    cout << "Podane oceny :"  << ile << endl ;
    for(int i = 0; i < ile; i++ ) 
    {
    suma +=tab[i];   
    cout <<tab[i] <<" ";
    }
    return suma;
}

void pobierzDane(int tab[], int ile) {
     
    cout <<"Podaj :" << ile << "liczb:" << endl ;
    for(int i = 0; i < ile; i++ ) 
    {
    cin >> tab [i];
    }
    
    
    }
    
int liczSrednia(int tab[],int ile ) {
    return sumuj(tab, ile)/float (ile);
}
       
int main(int argc, char **argv)
{
    //const int rozmiar = 5;
    int rozmiar = 0 ;
    cout <<"Ile ocen :" <<endl ;
    cin >> rozmiar ;
    
    int liczby[rozmiar];
    
    pobierzDane(liczby, rozmiar);
    
    //~cout <<"Podaj pięć ocen (0-6) :" << endl ;
    //~for(int i = 0; i < rozmiar; i++ ) 
    //~{
    //~cin >> liczby [i];
    //~}
     
    
    //~cout << "Podane oceny :" << endl ;
    //~for(int i = 0; i < rozmiar; i++ ) 
    //~{
    //~suma +=liczby[i]  ;   
    
    //~cout <<liczby[i] << endl ;
    //~}
    cout <<"suma ocen :" << sumuj(liczby, rozmiar) <<endl ;
    //~cout <<"Średnia arytmetyczna:" << float (suma)/float (5) << endl ;
    cout <<"srednia:" <<liczSrednia (liczby, rozmiar) << endl ;
	return 0;
}

