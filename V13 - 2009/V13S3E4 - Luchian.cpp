#include <iostream>
#include <fstream>

using namespace std;

/*
Subprogramul  va  furniza  tot  prin  intermediul  parametrului  n  numărul  obţinut  din  n  prin  eliminarea tuturor apriţiilor cifrei c.
Dacă, după eliminare, numărul nu mai conţine nicio cifră sau conţine doar cifre 0, rezultatul returnat va fi 0

Pe prima linie a fişierului text BAC.IN se găsesc, separate prin câte un spaţiu, mai multe numere  naturale  de  cel  mult  9  cifre  fiecare.
Scrieţi  programul  C/C++  care  citeşte  numerele din acest fişier,
utilizând apeluri ale subprogramului P  elimină toate cifrele impare din fiecare dintre  aceste  numere  şi  apoi  scrie  în  fişierul  text  BAC.OUT  numerele  astfel  obţinute,
separate prin câte un spaţiu.
Dacă un număr din fişierul BAC.IN nu conţine nicio cifră pară nenulă, acesta nu va mai apărea deloc în fişierul de ieşire.
*/

void P(unsigned int &n, unsigned int c)
{
    unsigned v[10], contor=0;

    while (n != 0) // trecem numarul intr-un vector
    {
        v[contor] = n%10;
        n = n/10;
        contor++;
    }

    for (int i=contor-1; i>=0; i--) //reconstruim numarul sarind peste cifra indicata
        if (v[i] != c)
            n = n * 10 + v[i];
}

int main()
{
    ifstream f("BAC1.IN");
    ofstream g("BAC1.OUT");

    unsigned int n;

    while (f >> n)
    {
        for (int i=1; i<=9; i+=2) // eliminam cifrele impare din numar
            P(n, i);

        if (n != 0) // daca numarul este diferit de 0 il introducem in fisier
            g << n << " ";
    }

    f.close()
    g.close();

    return 0;
}
