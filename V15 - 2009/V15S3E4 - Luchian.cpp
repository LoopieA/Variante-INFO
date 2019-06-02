#include <iostream>
#include <fstream>

using namespace std;

/*
În fişierul  text  BAC.IN se găsesc, pe o singură linie, separate prin câte un spaţiu, mai multe numere  naturale  de  cel  mult  6  cifre  fiecare.
Se  cere  să  se  determine  şi  să  se  afişeze  pe  ecran,  separate  printr-un  spaţiu,  ultimele  două  numere  impare  (nu  neapărat  distincte)  din  fişierul BAC.IN.
Dacă în fişier se găseşte un singur număr impar sau niciun număr impar se va scrie pe ecran mesajul Numere insuficiente.
*/

int main()
{
    ifstream f("date.txt");
    unsigned int nr, impar1=0, impar2=0, impar1sau2=2;

    while (f >> nr) // citim sirul de numere
    {
        if (nr % 2 == 1) // cand gasim un numar impar il introducem in variabila impar1 sau in impar2, in functie de valoare variabilei impar1sau2
        {
            if (impar1sau2 == 1)
            {
                impar2 = nr;
                impar1sau2 = 2;
            }
            else
            {
                impar1 = nr;
                impar1sau2 = 1;
            }
        }
    }

    if (impar1 == 0 || impar2 == 0) // daca nu au fost gasite destule numere impare inseamna impar1 sau impar2 inca au valoarea 0, asa ca afisam "numere insuficiente"
        cout << "Numere insuficiente.";
    else if (impar1sau2 == 1) cout << impar2 << " " << impar1; // afisam numerele in ordinea aparitiei lor in fisier
    else cout << impar1 << " " << impar2;

    return 0;
}
