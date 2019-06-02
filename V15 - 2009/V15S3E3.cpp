#include <iostream>

using namespace std;

/*
Scrieţi  un  program  C/C++  care  citeşte  de  la  tastatură  un  număr  natural  n (n≤32000) şi afişează pe ecran numărul natural din intervalul închis [1,n] care are cei mai mulţi divizori.
Dacă există mai multe numere cu această proprietate se va afişa cel mai mic dintre ele.
*/

unsigned int sub(unsigned int n) // subprogramul returneaza cati divizori are un numar
{
    unsigned int cati_divizori=0;
    for (int d=2; d<=n/2; d++)
        if (n % d == 0)
            cati_divizori++;
    return cati_divizori;
}

int main()
{
    unsigned int n, maxim=0, pozitie, aux;
    cin >> n;
    if (n <= 32000)
    {
        for (int i=1; i<=n; i++)
        {
            aux = sub(i);
            if (aux > maxim)
            {
                maxim = aux;
                pozitie = i;
            }
        }
    }
    cout << pozitie;
}
