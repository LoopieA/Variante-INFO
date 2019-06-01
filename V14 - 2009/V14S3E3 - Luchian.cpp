#include <iostream>
#include <fstream>

using namespace std;

/*
Se citeşte de la tastatură un număr natural n (n≤500) şi apoi n cifre separate prin spaţii.
Se cere să se afişeze pe ecran cele n cifre citite, în ordine crescătoare, separate prin câte un spaţiu.
*/

int main()
{
        ifstream f("date.txt");

        unsigned int n, v[11] = {0};

        f >> n;

        if (n <= 500)
        {
                while (f >> n) // citim toate cifrele din sir si folosim vectorul de aparitii pentru a contoriza de cate ori apare fiecare cifra
                        v[n] += 1;

                for (int i=0; i<10; i++) // parcurgem vectorul construit si afisam indicele i de v[i] ori pentru a afisa cerinta exercitiului
                        for (int j=0; j<v[i]; j++)
                                cout << i << " ";
        }

        return 0;
}
