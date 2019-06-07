#include <iostream>

using namespace std;

/*
Subprogramul resturi are patru parametri, n, x, y și r, prin care primeşte câte un număr natural  din  intervalul [1,109], r<x<y<n.
Subprogramul  returnează  numărul  de  valori naturale din intervalul [1,n] pentru care atât restul împărțirii la x, cât și restul împărțirii la y, sunt egale cu r.
*/

unsigned int resturi(unsigned int x, unsigned int y, unsigned int n, unsigned int r)
{
    int contor=0;
    if (1 <= r && r < x && x < y && y < n)
        for (int i=1; i<=n; i++)
            if (i%x == r && i%y == r)
                contor++;
    return contor;
}

int main()
{
    cout << resturi(5, 14, 200, 2);
}
