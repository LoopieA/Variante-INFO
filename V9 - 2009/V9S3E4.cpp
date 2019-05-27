#include <iostream>
#include <fstream>

using namespace std;

/*
Se  consideră  fişierul BAC.TXTce  conţine  cel  mult  un  milion  de  numere  naturale  separate  prin spatii, fiecare număr având cel mult nouă cifre.
Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi determină, folosind un algoritm eficient din punct de vedere timpului de executare,
cele mai mari douănumere  de  trei  cifre  care  nu  se  află  în  fişier. Cele  două  numere  vor  fi  afişate  pe  ecran  în  ordine  descrescătoare,  cu  un  spaţiu  între  ele.
Dacă  nu  pot  fi  determinate  două  astfel  de  numere, programul va afişa pe ecran valoarea 0.
*/

int main()
{
    ifstream f("date2.txt");

    unsigned int x, v[901], contor=0, next_loop=0, aux, numere_gasite=0, nu_e_asta=0;

    while (f >> x) // se citesc numerele din sir
    {
        if (x/100 != 0 && x/1000 == 0) // se iau doar numerele de 3 cifre si urmeaza sa fie puse intr-un tablou unidimensional
        {
            v[contor] = x;

            for (int i=0; i<contor; i++) // se verifica daca numarul exista deja in tablou si daca este deja se cauta urmatorul numarul
            {
                if (v[contor] == v[i])
                {
                    next_loop = 1;
                    break;
                }
            }

            if (next_loop == 0) // cand elementul gasit nu exista deja in tablou se cauta urmatorul termen
            {
                contor++;
            }
            else // cand termenul gasit exista deja in tablou se cauta din nou un termen pentru aceasta pozitie
            {
                next_loop = 0;
                continue;
            }
        }
    }

    for (int i=0; i<contor-1; i++) // se sorteaza descrescator vectorul
    {
        for (int j=i+1; j<contor; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for (int i=999; i>=100; i--) // se cauta, incepand de la 999 si pana la 100, primele 2 cele mai mari numere de 3 cifre care nu exista in vector
    {
        nu_e_asta = 0;

        for (int j=0; j<contor; j++) // se compara numarul la care am ajuns cu toate elementele vectorului
        {
            if (v[j] == i)
            {
                nu_e_asta = 1;
                break;
            }
        }

        if (nu_e_asta == 1) // daca numarul la care am ajuns se gaseste in vector, cautam urmatorul numar
        {
            continue;
        }
        else // daca numarul la care am ajuns nu se gaseste in vector, il afisam; cand am gasit doua numere oprim cautarea;
        {
            cout << i << " ";
            numere_gasite++;
            if(numere_gasite == 2) break;

        }
    }
}
