#include <iostream>

using namespace std;

/*
Subprogramul minDivPrim  are  un  singur  parametru, n,  prin  care  primeşte  un  număr natural  (n∈[2,10^9]).
Subprogramul  returnează  cel  mai  mic  număr  natural  care  are aceiași divizori primi ca n. Scrieţi definiţia completă a subprogramului.
*/

unsigned int prim(unsigned int n)
{
    for (int d=2; d<=n/2; d++)
        if (n%d == 0)
            return 0;
    return 1;
}

unsigned int minDivPrim(unsigned int n)
{
    unsigned int rezultat=1;

    if (prim(n))
    {
        return n;
    }
    else
    {
        for (int d=2; d<=n/2; d++)
        {
            if (prim(d) && n%d == 0)
                rezultat = rezultat * d;
            else
                continue;
        }
    }
    return rezultat;
}

int main()
{
    cout << minDivPrim(75);
}
