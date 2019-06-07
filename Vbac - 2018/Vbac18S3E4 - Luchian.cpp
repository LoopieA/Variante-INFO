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

int main()
{
    ifstream f("date.txt");
    unsigned int a, b, c, n, lungime=2, maxim=0;
    f >> a >> b; //citim primii doi termeni din sir

    while (f >> c) //parcurgem sirul
    {
        if (a != b && b != c) //daca termenul citit apartine secventei neuniforme
        {                    //crestem lungimea si continuam cautarea
            lungime++;
        }
        else                      //daca urmatorul termen sparge secventa neuniforma
        {                         //comparam lungimea secventei gasite cu maximul de
            if (lungime > maxim)  //pana acum si cautam urmatoarea secventa neuniforma
                maxim = lungime;
            lungime = 2;
        }
        a = b;
        b = c;
    }

    cout << maxim; //afisam maximul gasit
}
