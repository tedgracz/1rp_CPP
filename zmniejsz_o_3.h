#include <iostream>

using namespace std;
void zmniejsz_o_3_i_wypisz( double a);
//-----------------------------------------------
int main()
{
    double r = 3.14;
    cout << "liczba = " << r << endl;
    zmniejsz_o_3_i_wypisz( r);
    cout << "liczba = " << r;
}
//-----------------------------------------------
void zmniejsz_o_3_i_wypisz( double a)
{
    a = a - 3;
    cout << "liczba zmniejszona o 3 = " << a << endl;
}
