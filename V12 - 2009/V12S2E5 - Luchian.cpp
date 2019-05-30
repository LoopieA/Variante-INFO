#include <iostream>

using namespace std;

/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoi construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n,
ale cărei elemente primesc valori după cum urmează: elementul din linia i şi coloana j primeşte ca valoare ultima cifră a produsului i*j (1≤i≤nşi 1≤j≤n).
*/

int main()
{
    unsigned int n, v[25][25];

    cin >> n;

    if (n > 2 && n < 25)
    {
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
            {
                v[i][j] = i*j%10;
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
}
