#include <iostream>

using namespace std;

/*
Subprogramul nrDiv are doi parametri, a și b (a≤b), prin care primeste câte un număr
natural din intervalul [1,10^9]. Subprogramul returnează numărul valorilor din intervalul
[a,b] care pot fi scrise ca produs de două numere naturale consecutive.
Scrieti definitia completă a subprogramului.
*/

unsigned int nrDiv(unsigned int a, unsigned int b)
{
    unsigned int nr, i=1, contor=0;
    for (a; a<=b; a++)
    {
        nr = a;
        while (i*(i+1) <= nr)
        {
            if (i*(i+1) == nr)
            {
                contor++;
                break;
            }
            i++;
        }
    }
    return contor;
}

int main()
{
    cout << nrDiv(10, 40);
}
