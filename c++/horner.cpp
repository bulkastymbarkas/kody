


#include <iostream>
using namespace std;
// wx= 2x^3 +3x^2 + 5x^4 (8)
// wx = x(2x^2 + 3x^5) +4
// wx=x(x(2x + 3)+5) +4

float horner_it(int k, float tab[], float x){
    float wynik = tab[0];
    for (int i = 1; i < k + 1; i++){
        wynik = wynik * x + tab[i];
    }
    return wynik ;
}
int main(int argc, char **argv)
{
    
    float tab[4];
	float x;
    int stopien = 3;
    
    cout << "podaj argument: ";
    cin >> x ;
    for(int i = 0 ; i < 4 ; i++ ){
        cout << "Podaj współczynnik: ";
        cin >> tab[i];
    }
    cout << "Wartość wielomianu: "  << horner_it(stopien, tab, x) ;
    
    
    
    
    
    
	return 0;
}

