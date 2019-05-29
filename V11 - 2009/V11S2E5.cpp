#include <iostream>
#include <fstream>
/*
Scrieţi  un  program  C/C++  care  citeşte  de  la  tastatură  două  valori  naturale  nenule  m şi n(m≤10, n≤10) şi apoi m*n numere naturale nenule cu cel mult 4 cifre fiecare,
reprezentând elementele unei matrice cu m linii şi n coloane.
Programul determină apoi valorile minime de pe fiecare linie a matricei şi afişează pe ecran cea mai mare valoare dintre aceste minime.
*/

using namespace std;

int main()
{
    ifstream f("date.txt");

    unsigned int n, m, a[11][11], v[11]={NULL}, minim, maxim=0;

    f >> m >> n;

    if (n != 0 && n<=10 && m != 0 && m<=10)
    {
        for (int i=0; i<m; i++) // citirea si afisarea matricii
        {
            for (int j=0; j<n; j++)
            {
                f >> a[i][j];
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        for (int i=0; i<n; i++) // calcularea minimului de pe fiecare coloana
        {
            minim = a[0][i]; // se pune in variabila minim primul numar din fiecare coloana

            v[i] = minim; // in cazul in care primul numar din coloana este minimul

            for (int j=0; j<m; j++)
            {
                if (minim > a[j][i]) // daca exista un numar mai mic in coloana, "minim" se inlocuieste
                {
                    minim = a[j][i];
                    v[i] = minim;
                }
            }
        }

        for (int i=0; i<n; i++) // se cauta maximul din vectorul care contine minimul fiecarei coloane
        {
            if (maxim < v[i])
            {
                maxim = v[i];
            }
        }

        cout << maxim;
    }

}
