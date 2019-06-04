#include <iostream>

using namespace std;

/*
Scrieţi  un  program  C/C++  care  citeşte de la tastatură  un  număr  natural  n (2<n<20),construieşte  în  memorie  şi  afişează  pe  ecran  o  matrice  cu  n liniişi n coloane,
în  care  fiecare element de pe diagonala secundară are valoarea n, fiecare element aflat deasupra diagonalei  secundare  este  mai  mic  cu
o  unitate  decât  vecinul  aflat  pe  aceeaşi  linie  în  dreapta  lui  şi  fiecare  element  aflat  sub  diagonala  secundară este  mai  mare  cu
o  unitate  decât vecinul aflat pe aceeaşi linie în stânga lui.
*/

int main()
{
    unsigned int n, a[20][20];
    cin >> n;

    if (n > 2 && n < 20)
    {
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
            {
                a[i][j] = i+j-1;
                cout << a[i][j] << " ";

            }
            cout << endl;
        }
    }

    return 0;
}
