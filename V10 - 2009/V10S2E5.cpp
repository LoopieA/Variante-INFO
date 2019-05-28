#include <iostream>

using namespace std;

/*
Scrieţi  un  program  C/C++  care  citeşte  de  la  tastatură  două  numere  naturale  nşi p(2≤n≤20, 1≤p≤20)
şi  construieşte  în  memorie  un  tablou  bidimensional  cu  n  linii  şi pcoloane. Tabloul va fi construit astfel încât,
parcurgând matricea linie cu linie de sus în jos şi fiecare linie de la stânga la dreapta, să se obţină şirul primelor n*ppătrate perfecte pare,
ordonat strict crescător, ca în exemplu. Tabloul astfel construit va fi afişat pe ecran, fiecare linie a tabloului pe câte o linie a ecranului,
cu câte un spaţiu între elementele fiecărei linii.
*/

int main()
{
    unsigned int n, p, patrat=0, matrice[21][21];

    cin >> n >> p;

    if (n>=2 && n<=20 && p<=20)
    {
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<p; j++)
            {
                matrice[i][j] = patrat * patrat;
                patrat = patrat + 2;
                cout << matrice[i][j] << " ";
            }
            cout << endl;
        }
    }


}
