#include <iostream>
#include <fstream>

/*
Fişierele text NR1.TXT şi NR2.TXT conţin, separate prin câte un spaţiu, mai multe numere întregi  de  cel  mult  9 cifre  fiecare.
Fiecare  dintre  fişiere  conţine  cel  mult  100  de  valori  şi numerele din fiecare fişier sunt ordonate strict crescător.
Se cere să se afişeze pe ecran, în ordine  crescătoare,  numerele  divizibile  cu  5    care  se  găsesc  doar  în  unul  din  cele  douăfişiere.
*/

using namespace std;

int main()
{
    ifstream f1("date1.txt");
    ifstream f2("date2.txt");

    unsigned int x, y;

    f1 >> x; f2 >> y; // se citesc primii termeni din ambele siruri

    while(f1 && f2)
    {
        if (x%5 != 0) // cautam in f1 pana gasim un termen divizibil cu 5
            f1 >> x;

        if (y%5 != 0) // cautam in f2 pana gasim un termen divizibil cu 5
            f2 >> y;

        if (x%5 == 0 && y%5 == 0) // cand am gasit si in f1 si in f2 un termen divizibil cu 5, il afisam pe cel mai mic si doar acel sir cauta urmatorul termen
        {
            if (x < y)
            {
                cout << x << " ";
                f1 >> x;
            }
            else if (x > y)
            {
                cout << y << " ";
                f2 >> y;
            }
            else // daca cei doi termeni sunt egali nu a fisam nimic si cautam urmatoarea pereche de termeni divizibili cu 5 din cele doua siruri
            {
                f1 >> x;
                f2 >> y;
            }
        }

        if (x%5 == 0 && !f2) // in cazul in care am terminat de citit unul dintre siruri dar am gasit un termen divizibil cu 5 in celalat sir il afisam si cautam urmatorul termen
        {
            cout << x << " ";
            f1 >> x;
        }

        if (y%5 == 0 && !f1)
        {
            cout << y << " ";
            f2 >> y;
        }
    }
}