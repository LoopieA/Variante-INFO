#include <iostream>

using namespace std;

/*
Scrieţi  definiţia  completă  a  subprogramului  interval  care  are  doi  parametri a şi n, prin care  primeşte  un  tablou  unidimensional
cu  maximum  100  de  numere  naturale  mai  mici  decât 1000 şi   respectiv   numărul   efectiv   de   elemente   din   tabloul   unidimensional.
Subprogramul  returnează  numărul    de  elemente  din  tabloul  unidimensional  care  aparţin intervalului închis determinat de primul şi respectiv ultimul element al tabloului.
*/

unsigned int interval(unsigned int a[100], unsigned int n)
{
    unsigned int contor=0;

    if (a[0] > a[n-1]) // ne asiguram ca primul element este mai mic decat ultimul element din sir
    {                  // si le interschimbam daca e nevoie
        contor = a[0];
        a[0] = a[n-1];
        a[n-1] = contor;
        contor = 0;
    }

    for (int i=0; i<n; i++) // parcurgem sirul si crestem valoare contorului daca elementul la care am ajuns se afla in intervalul [a[0], a[n-1]]
    {
        if (a[i] > 1000)
            return NULL;
        if (a[i] >= a[0] && a[i] <= a[n-1])
            contor++;
    }

    return contor;
}

int main()
{
    unsigned int a[100], n;
    cin >> n;

    for (int i=0; i<n; i++)
        cin >> a[i];

    cout << interval(a, n);
}
