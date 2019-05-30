#include <iostream>

using namespace std;

/*
Scrieţi  un  program  C/C++  care  citeşte  de  la  tastatură  o  valoare  naturală  nenulă n (n≤20), apoi  un  şir  de  n  numere  naturale,  având  fiecare  exact  5  cifre.
Dintre  cele  n  numere  citite,  programul  determină  pe  acelea  care  au  toate  cifrele  egale  şi  le  afişează  pe  ecran,  în  ordine  crescătoare, separate prin câte un spaţiu.
*/

unsigned int sub(unsigned int n)
{
    while (n/10 > 0) // cat timp n mai are cel putin o cifra
    {
        if (n%10 != (n/10)%10) // daca ultima cifra nu coincide vreodata cu penultima cifra subprogramul returneaza 0
            return 0;
        n = n/10; // se elimina ultima cifra
    }
    return 1; // daca trece prin tot numarul fara sa returneze 0, returnteaza 1
}

int main()
{
    unsigned int n, sir[21], aux;

    cin >> n;

    if (n != 0 && n <= 20)
    {
        for (int i=0; i<n; i++) // se citeste sirul
            cin >> sir[i];

        for (int i=0; i<n-1; i++) // se sorteaza crescator sirul
            for (int j=i+1; j<n; j++)
                if (sir[i] > sir[j])
                {
                    aux = sir[i];
                    sir[i] = sir[j];
                    sir[j] = aux;
                }

        for (int i=0; i<n; i++) // se verifica daca termenii sirului au toate cifrele egale si se afiseaza termenii care satisfac conditia
            if(sub(sir[i]))
                cout << sir[i] << " ";
    }

    return 0;
}