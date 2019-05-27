#include <iostream>

using namespace std;

/*
Scrieţi  definiţia  completă  a  subprogramului  sub  cu  doi  parametri:  n (număr  natural,0<n≤50) şi k (număr natural, 0<k≤20).
Subprogramul determinăafişarea pe o linie nouă a ecranului,  în  ordine  descrescătoare,  a  primelor  n  numere  naturale  nenule  divizibile  cu  k.
Numerele vor fi separate prin câte spaţiu.
*/

void sub(unsigned int n, unsigned int k)
{
    if (n <= 50 && k <= 20)
    {
        while (n > 0)
        {
            cout << k * n << " ";
            n--;
        }
    }
}

int main()
{
    sub(3, 5);
}
