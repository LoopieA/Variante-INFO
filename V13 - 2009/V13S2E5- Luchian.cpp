#include <iostream>

using namespace std;

/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoiconstruieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n,
ale cărei elemente primesc valori după cum urmează: - elementele aflate pe diagonala secundară sunt toate nule; - elementele de pe coloana i (1≤i≤n),
aflate deasupra diagonalei secundare, au valoarea egală cu i;  - elementele de pe linia n-i+1 (1≤i≤n), aflate sub diagonala secundară, au valoarea egalăcu i
*/

int main()
{
    unsigned int n, a[25][25];

    cin >> n;

    if (n > 2 && n < 25)
    {
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
            {
                if (i + j == n+1)
                    a[i][j] = 0;

                else if (i + j < n+1)
                    a[i][j] = j;

                else if (i + j > n+1)
                    a[i][j] = n-i+1;

                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}
