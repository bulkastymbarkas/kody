/*
 * hello.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    
    int bok = 0; 
	cout << "Witaj w Szczebrzeszynie" << endl;
	cout << "Podaj bok kwadratu " ;
    
    cin >> bok;
    cout << "Pole kwadratu: " << bok * bok  << endl;
    cout << "Obówd kwadratu: " << 4 * bok  << endl;
    
	return 0;
}

