#include <iostream>

using namespace std;

/*
Scrieţi antetul funcţiei sum care primeşte ca parametru un număr natural nenul  x cu maximum 9 cifre şi returnează suma divizorilor numărului x.
Să se scrie un program C/C++ care citeşte de la tastatură un număr natural n(0<n<25) şi apoi n  numere  naturale  nenule  cu  maximum  9  cifre  fiecare.
Programul  calculează, folosind apeluri ale funcţiei sum, şi afişează pe ecran câte numere prime conţine şirul citit.
*/

unsigned int sum (unsigned int x)
{
    unsigned int suma=0;

    if (x != 0)
    {
        for (int i=1; i<=x/2; i++) // cautam divizori de la 1 pana la jumatatea numarului
        {
            if (x%i == 0) // daca ii gasim ii adaugam in suma
            {
                suma = suma + i;
            }
        }
    }

    suma = suma + x; // la sfarsit adaugam chiar numarul in sine in suma, pentru ca este divizor propriu

    return suma;
}

int main()
{
    unsigned int n, numar_citit, cate_prime=0; cin >> n;

    if (n < 25)
    {
        for (int i=0; i<n; i++)
        {
            cin >> numar_citit;

            if (sum(numar_citit) == numar_citit+1) // daca numarul e prim atunci are ca divizori doar pe el insusi si pe 1, adica suma lor este numar_citit + 1
            {
                cate_prime = cate_prime + 1;
            }
        }

        cout << cate_prime;
    }
}
