#include <iostream>
#include <fstream> 

/*
Fişierul  text  numere.txt  conţine  pe  prima  linie  un  număr  natural  n (n<30000),
iar  pe  a  doua linie n numere întregi având maximum 4 cifre fiecare. Se cere să se afişeze pe ecran un şir  de  n  numere  întregi,
cu  proprietatea  că  valoarea  termenului  de  pe  poziţia i(i=1,2,...,n) din acest şir este egală cu cea mai mare dintre primele i valori de pe a doua linie a fişierului numere.txt.
*/

using namespace std;

int main()
{
    ifstream f("date_2.txt");

    unsigned int x, maxim, n;

    f >> n >> x;

    maxim = x; // se introduce in variabila maxim prima valoare a sirului

    for (int i=1; i<=n; i++) // se compara termenul la care am ajuns cu maximul sirului pana la el
    {
        if (maxim < x)
        {
            maxim = x;
        }

        cout << maxim << " ";

        f >> x;
    }
}
