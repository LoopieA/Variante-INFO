#include <iostream>
#include <fstream>

/*
Pe prima linie a fişierului text BAC.TXT se află o valoare naturalăn (1<n≤50), iar pe a doua linie n  numere  naturale  cu  maximum  4  cifre  fiecare,  despărţite  prin  câte  un  spaţiu.
În  şirul numerelor de pe a doua linie a fişierului există cel pzâin două numere pătrate perfecte.
Scrieţi  un  program  C/C++  care  citeşte  toate  numerele  din  fişier şi afişează  pe  ecran  expresia  aritmetică  reprezentând
suma  numerelor  de  pe  a  doua  linie  a  fişierului  care  au  proprietatea  că  sunt  pătrate  perfecte,  cu  simbolul  +  între  ele  şi,  după  un  semn  =,  valoarea  acestei sume,
ca în exemplu.
Termenii sumei afişate se pot afla în orice ordine.
*/

using namespace std;

unsigned int patrat_perfect(unsigned int n)
{
    for (int i=0; i<100; i++)
    {
        if (i*i == n) return 1;
    }
    return 0;
}

int main()
{
    ifstream f("date.txt");

    unsigned int n, nr, suma=0, i=0; f >> n;

    for (i; i<n; i++) // afisam primul termen care e patrat perfect
    {
        f >> nr;

        if (patrat_perfect(nr))
        {
            cout << nr;
            suma += nr;
            break;
        }
    }

    for (i; i<n; i++) // afisam ceilalti termeni sub formatul "+termen"
    {
        f >> nr;

        if (patrat_perfect(nr))
        {
            cout << "+" << nr;
            suma += nr;
        }
    }

    cout << "=" << suma; // afisam "=" si suma tuturor termenilor
}
