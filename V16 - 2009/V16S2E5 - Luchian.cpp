#include <iostream>

using namespace std;

/*
Scrieţi  un  program  C/C++  care  citeşte de la tastatură  un  număr  natural  n (2<n<16),
construieşte  în  memorie  şi  afişează  pe  ecran  o  matrice  cu  n liniişi n coloane  în  care  elementele  de  pe  cele  două  diagonale  sunt  egale  cu  0,
elementele  care  se  află  deasupra  ambelor  diagonale  sunt  egale  cu  1,  elementele  care  se  află  sub  ambele  diagonale  sunt  egale cu 2,
iar restul elementelor sunt egale cu 3.
*/

int main()
{
    unsigned int n, a[16][16]={0};
    cin >> n;

    if (n > 2 && n < 16)
    {
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
            {
                if (i < j && i + j <= n) // deasupra ambelor diagonale
                    a[i][j] = 1;
                else if (i < j && i + j > n) // in dreapta diagonalelor
                    a[i][j] = 3;
                else if (i > j && i + j > n) // sub ambele diagonale
                    a[i][j] = 2;
                else if (i > j && i + j <= n) // in stanga diagonalelor
                    a[i][j] = 3;

                if (i + j == n + 1) // diagonala secundara
                    a[i][j] = 0;
                if (i == j) // diagonala principala
                    a[i][j] = 0;

                cout << a[i][j] << " ";

            }
            cout << endl;
        }
    }

    return 0;
}
