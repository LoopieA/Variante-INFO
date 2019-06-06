#include <iostream>
#include <fstream>

using namespace std;

/*
Un interval este numit prieten de grad n al unui șir dacă sunt exact n termeni ai șirului cu valori din
interval și dacă toate numerele întregi care aparțin intervalului sunt valori ale unor termeni ai șirului.
Fișierul bac.txt conține un șir de cel mult 10^6
numere naturale din intervalul [0,10^2], separate
prin câte un spațiu. Se cere să se afișeze pe ecran numărul maxim n cu proprietatea că există un
interval prieten de grad n al șirului aflat în fișier. Proiectați un algoritm eficient din punctul de vedere
al timpului de executare.
*/

int main()
{
    ifstream f("date.txt");
    unsigned int v[101]={}, i, contor=0, maxim=0;

    while (f >> i) // citim sirul si il introducem intr-un vector de aparitii
        v[i]++;

    i=0;

    while (i <= 100) // parcurgem sirul
    {
        contor = 0;
        while (v[i] != 0) // cautam subsiruri marginite de 0 in ambele parti
        {                 // calculam suma elementelor
            contor += v[i];
            i++;
        }
        if (maxim < contor) // aflam cea mai mare suma din sir
            maxim = contor;
        i++;
    }

    cout << maxim; // afisam suma
}
