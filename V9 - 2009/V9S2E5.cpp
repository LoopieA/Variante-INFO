#include <iostream>
#include <fstream>

using namespace std;
/*
Se consideră tabloul bidimensional cu n linii şi n coloane  ce conţine numere naturale cu cel mult  patru cifre fiecare.
Scrieţi programul C/C++ care citeşte de la tastatură numărul natural n (2≤n≤23) şi cele n*n elemente ale tabloului şi apoi afişează pe ecran elementele primului pătrat  concentric,
separate  prin  câte  un  spaţiu.  Pătratul  este  parcurs  în  sensul  acelor  de  ceasornic începând din colţul  său stânga-sus, ca în exemplu.
Primul pătrat concentric este format din prima şi ultima linie, prima şi ultima coloană a tabloului.
*/

int main()
{
    int n, a[30][30];

    ifstream f("date.txt");

    f >> n;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            f >> a[i][j];
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int i=0, j=0;

    while (j<n) // parcurgem linia de sus a patratului
    {
        cout << a[i][j] << " ";
        j++;
    } i++; j--;

    while (i<n) // parcurgem linia dreapta a patratului
    {
        cout << a[i][j] << " ";
        i++;
    } i--; j--;

    while (j>=0) // parcurgem linia de jos a patratului
    {
        cout << a[i][j] << " ";
        j--;
    } i--; j++;

    while (i>0) // parcurgem linia stanga a patratului
    {
        cout << a[i][j] << " ";
        i--;
    }
}
