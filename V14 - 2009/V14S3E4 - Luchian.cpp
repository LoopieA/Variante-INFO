#include <iostream>
#include <fstream>

using namespace std;

/*
Fişierul  text  BAC.TXT  conţine  mai  multenumere  naturale,  cu  cel  mult  6 cifre fiecare, 
câte un număr pe fiecare linie a fişierului.
Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi le afişează pe ecran, 
în aceeaşi ordine, câte cinci pe fiecare linie, separate prin câte un  spaţiu,  
cu  excepţia  ultimei  linii  care  poate  conţine  mai  puţin  de  cinci  numere.    
Programul va afişa apoi pe ecran, pe o linie separată,  câte numere din fişier au suma cifrelor pară.
*/

void sub(ifstream &f, unsigned int &contor_nr_pare) // acest subprogram citeste si afiseaza 5 numere din fisier
{                                                   // si contorizeaza cate numere pare citeste
        unsigned int v[5];

        for (int i=0; i<5; i++)
        {
                if (f >> v[i])
                        cout << v[i] << " ";
                if (v[i] % 2 == 0)
                        contor_nr_pare++;
        }
        cout << endl;
}

int main()
{
        ifstream f("BAC.TXT");
        unsigned int contor_nr_pare=0;

        while (f) sub(f, contor_nr_pare); // subprogramul este rulat pana cand am citit toate numerele din fisier
        cout << contor_nr_pare; // se afiseaza cate numere pare am gasit

        f.close();
        return 0;
}
