#include <iostream>
#include <fstream>

using namespace std;

/*
În fişierul numere.txt sunt memorate maximum 10000 de numere naturale cu cel mult 9cifre  fiecare.  Fiecare  linie  a  fişierului  conţine  câte  un  număr.
Se  cere  afişarea  pe  ecran,  în ordine descrescătoare, a tuturor cifrelor care apar în numerele din fişier.
*/

int main()
{
    ifstream f("numere.txt");
    unsigned int n, v[10]={};

    while (f >> n) // citim sirul de numere
    {
        while (n > 0) // folosim un vector de aparitii pentru a contoriza de cate ori apare fiecare cifra in numerel din sir
        {
            v[n%10]++;
            n = n/10;
        }
    }

    for (int i=9; i>=0; i--) // afisam, folosind vectorul de aparitii, sirul cerut
        for (int j=v[i]; j>0; j--)
            cout << i;

    return 0;
}
