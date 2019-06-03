#include <iostream>

using namespace std;

/*
Scrieţi  definiţia  completă  a  subprogramului  multiplu  care  are  3  parametri:
a,  prin  care  primeşte  un  tablou  unidimensional  cu  maximum  100  de  numere  naturale  mai  mici  decât  1000,
n,   numărul   efectiv   de   elemente   ale   tabloului
şi k,   un   număr   natural   (k≤9).
Subprogramul returnează numărul  de elemente din tablou care sunt multipli ai numărului k şi au ultima cifră egală cu k.
*/

unsigned int multiplu(unsigned int v[100], unsigned int n, unsigned int k)
{
    unsigned int contor=0;
    for (int i=0; i<n; i++) // parcurgem numerele din matrice
    {
        if (v[i] > 1000) // verifica daca toate numerele sunt mai mici decat 1000
            return NULL;
        else if (v[i]%k == 0 && v[i]%10 == k) // facem contorul sa creasca cu 1 cand gasim un numar care este multiplu de k si are ultima cifra k
            contor++;
    }
    return contor;
}

int main()
{
    unsigned int a[] = {9,273,63,83,93,123}, n=6, k=3;
    cout << multiplu(a,n,k);
}
