


#include <iostream>

using namespace std;

void dodaj(int a, int b)
{
   cout <<"Suma:" << a+b << endl ; 
    
    
}
int odejmij(int f, int g)
{
    
    return  f - g ;
}
void mnoz (int c,int n)
{
    
cout <<"Iloczyn:" << c*n << endl ;    
}
float dziel (float q,float w )
{
   if(w==0)
   cout <<"Dzielnik nie może być 0 " << endl;
   return 0 ;


   return q / w ; 
    
}
int main(int argc, char **argv)
{
	int a, b ;
    a=b=0 ;
    cout << "Podaj 2 liczby : " << endl ;
    cin >> a >> b ;
    
    dodaj(a, b);  //wywołanie funkcji 
    cout <<"Różnica:" << odejmij(a, b) <<endl;
    
    mnoz (a, b) ;
    cout <<"Iloraz:" << dziel (a, b) << endl;
	return 0;
}

