#include <iostream>
#include <fstream>

/*
Evidenţa   produselor   vândute   de   o   societate   comercială   este   păstrată   în   fişierul PRODUSE.TXT.
Pentru fiecare vânzare se cunosc: tipul produsului (un număr natural de cel mult 4 cifre),
cantitatea vândută exprimată in kilograme (un număr natural mai mic sau egal cu 100) şi preţul unui kilogram (un număr natural mai mic sau egal cu 100).
Fişierul PRODUSE.TXT  are  cel  mult  200000 de  linii  şi  fiecare  linie  conţine  trei  numere  naturale,  separate  prin  câte  un  spaţiu,
ce  reprezintă,  în  această  ordine  tipul,  cantitatea  şi preţul de vânzare al unui produs la momentul vânzării respective.
a) Să se scrie un program C/C++ care, utilizând un algoritm eficient din punct de vedere al timpului de executare,
determină pentru fiecare tip de produs vândut suma totală obţinutăîn  urma  vânzărilor.
Programul  va  afişa  pe  câte  o  linie  a  ecranului  tipul  produsului  şi suma totală obţinută, separate prin câte un spaţiu, ca în exemplu.
*/

using namespace std;

int main()
{
    ifstream f("date.txt");

    unsigned int tip, pret, cantitate, maxim=0;
    int v[10001]={NULL};

    while (f >> tip >> pret >> cantitate)
    {
        if (maxim < tip) maxim = tip;
        v[tip] = v[tip] + pret * cantitate;
    }

    for (int i=1; i<=maxim; i++)
    {
        if (v[i] != NULL) cout << i << " " << v[i] << endl;
        else cout << i << " " << 0 << endl;
    }
}
