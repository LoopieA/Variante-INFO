#include <iostream>

using namespace std;

/*
Subprogramul Egal  are  un  parametru, n,  prin  care  primeşte  un  număr  natural  cu  cel  puțin  o  cifrăimpară (n∈[10,10^9]).
Subprogramul returnează valoarea 1 dacă toate cifrele impare ale lui n sunt egale între ele sau valoarea 0 în caz contrar. Scrieți definiția completă a subprogramului.
*/

unsigned int Egal(unsigned int n)
{
    int cif=-1;
    while (n != 0) // parcurgem numarul n
    {
        if ((n%10)%2 == 1) // cautam cifrele impare
        {
            if (cif == -1) // prima cifra impara gasita este introdusa in variabila cif
                cif = n%10;
            else if (cif != n%10) // toata celelalte cifre impare sunt comparate cu prima cifra impara gasita
                return 0;         // si daca cel putin una difera, programul returneaza 0
        }
        n = n/10;
    }
    return 1; // cand programul a parcurs tot numarul fara sa returneze 0, returneaza 1
}

int main()
{
    cout << Egal(7727470);
}
