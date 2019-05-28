#include <iostream>

using namespace std;

/*
Scrieţi  definiţia  completă  a  subprogramului  sub  cu  trei  parametri:  n  (număr  natural, 5<n≤30000), a şi b;
subprogramul furnizează prin intermediul parametrilor a şi b cele mai mari două numere prime distincte mai mici decât  n.
*/

int prim(int n)
{
    for (int i=2; i<=n/2; i++)
        if (n%i == 0) return 0;

    return 1;
}

void sub(unsigned int n, unsigned int &a, unsigned int &b)
{
    int unde_suntem=0;

    if (n>5 && n<=30000)
    {
        while (unde_suntem != 2)
        {
            n = n-1;

            if (prim(n)) // daca gaseste un nr prim
            {
                if (unde_suntem == 0) // il pune prima oara in a
                {
                    unde_suntem = 1;
                    a = n;
                }
                else // pe urmatorul nr prim il pune in b si gata
                {
                    unde_suntem = 2;
                    b = n;
                }
            }
        }
    }
}

int main()
{
    unsigned int a, b, n=28;
    sub(n, a, b);
    cout << a << " " << b;
}
