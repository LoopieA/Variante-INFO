#include <iostream>

using namespace std;

/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n(n≤100) şi apoi cele n elemente, numere naturale cu cel mult 4 cifre fiecare, ale unui tablou unidimensional a.
Programul  afişează  pe  o  linie  a  ecranului  suma  celor  n  elemente  ale  tabloului,  pe  următoarea  linie  a  ecranului  suma  primelor  n-1  elemente  şi  aşa  mai  departe,
astfel  încât  ultima linie afişată să conţină doar primul element al tabloului.
*/

int main()
{
    int n, a[101], suma;

    cin >> n;

    for(int i=0; i<n; i++) // citirea tabloului unidimensional
    {
        cin >> a[i];
    }

    cout << endl;

    for(int i=n-1; i>=0; i--) // se calculeaza suma elementelor
    {
        suma = 0;

        for(int j=i; j>=0; j--)
        {
            suma += a[j];
        }

        cout << suma << endl;
    }
}
