#include <iostream>
#include <fstream>

using namespace std;

/*
Numim secvență neuniformă a unui șir de numere naturale un subșir al acestuia, format din termeni aflați pe poziții consecutive  în șirul dat,
cu proprietatea că oricare trei termeni aflați  pe  poziții  consecutive  sunt  diferiți.  Lungimea  secvenței  este  egală  cu  numărul  de termeni ai acesteia.
Fișierul bac.txt conține  un șir  de  cel  mult 106  numere  naturale  din  intervalul  [0,9].
Numerele sunt separate prin câte un spațiu, iar în șir există cel puțin trei termeni diferiți pe poziții consecutive.
Se cere să se afișeze pe ecran lungimea maximă a unei secvențe neuniforme a șirului aflat în fișier.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare și al memoriei utilizate.
*/

void diferite(unsigned int &a, unsigned int &b, unsigned int &c, ifstream &f) // subprogramul gaseste urmatorii trei termeni consecutivi diferiti dintr-un sir
{
    while ((a == b && b == c) || (a == b) || (a == c) || (b == c))
    {
        if (a == b && b == c)
        {
            f >> a >> b >> c;
        }
        if (a == b)
        {
            b = c;
            f >> c;
        }
        if (a == c)
        {
            a = b;
            b = c;
            f >> c;
        }
        if (b == c)
        {
            a = c;
            f >> b >> c;
        }
    }
}

int main()
{
    ifstream f("date.txt");
    unsigned int a, b, c, n, lungime=3, maxim=0;
    f >> a >> b >> c; // citim primii trei termeni din sir
    diferite(a, b, c, f); // gasim primii trei termeni consecutivi si diferiti din sir
    while (f >> n) // parcurgem in continuare sirul
    {
        if (n != b && n!= c) // daca urmatorul termen apartine secventei neuniforme verificam si urmatorul
        {
            a = b;
            b = c;
            c = n;
            lungime++;
        }
        else // daca urmatorul termen sparge secventa neuniforma, comparam lungimea secventei gasite cu maximul
        {    // de pana acum si cautam urmatoarea secventa neuniforma
            if (lungime > maxim)
                maxim = lungime;
            lungime = 3;
            a = n;
            f >> b;
            f >> c;
            diferite(a, b, c, f);
        }
    }
    cout << maxim; // afisam maximul gasit
}
