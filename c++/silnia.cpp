#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int silnia (int liczba)
{
    if (liczba<2) return liczba;
    return liczba*silnia(liczba-1);
}
 
int main()
{
    int s;
 
    cout << "podaj liczbe" << endl;
    cin >> s;
 
    cout << silnia(s) << endl;
 
    system("PAUSE");
    return(0);
}
