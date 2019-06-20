#include <iostream>

using namespace std;

/*
Se consideră șirul 1, -1, 2 ...  definit astfel: f1=1, f2=-1, iar fn=1 - 2·fn-1 - fn-2, dacă n≥3 (unde n este un număr natural).
Se  citește  de  la  tastatură  un  număr  natural, n  (n∈[1,10^9]), și  se  cere  să  se  scrie  în fișierul  text bac.out,
separați  prin  câte  un  spațiu,  primii n  termeni  ai șirului,  în  ordine inversă apariției lor în acesta.
Pentru  determinarea și  afișarea  numerelor  cerute  se  utilizează  un  algoritm  eficient  din punctul de vedere al spațiului de memorie și al timpului de executare.
*/

int main()
{
    int n;
    cin >> n;

    while (n >= 1)
    {
        if (n%2 == 0)
        {
            cout << -n/2 << " ";
        }
        else
        {
            cout << (n+1)/2 << " ";
        }
        n--;
    }
}
