#include <iostream>
#include <fstream>

using namespace std;

/*
Se consideră fişierul BAC.TXT ce conţine un şir crescător cu cel mult un milion de numere naturale de cel mult nouă cifre fiecare, separate prin câte un spaţiu.
Să se scrie un program C/C++care, folosind un algoritm eficient din punct de vedere al memoriei utilizate şi al timpului de executare,
citeşte din fişier toţi termenii şiruluişi afişeazăpe ecran, pe o singură linie, fiecare termen distinct al şirului urmat de numărul de apariţii ale acestuia în şir.
Valorile afişate sunt separate prin câte un spaţiu.
*/

int main()
{
    ifstream f("BAC.TXT");

    int x, y, contor=1;

    f >> x; //se citeste primul termen al sirului in variabila x

    while (f >> y) //se citesc pe rand restul numerelor din sir in variabila y
    {
        if (x == y) //daca x si y coincid, contorul care incepe de la 1 creste
        {
            contor++;
        }
        else //daca x si y nu coincid inseamna ca am trecut la alt grup de numere din sir, asa ca afisam grupul anterior si numarul de aparitii; x ia valoarea lui y si contorul este restartat
        {
            cout << x << " " << contor << " ";
            x = y;
            contor = 1;
        }
    }

    cout << y << " " << contor;
}
