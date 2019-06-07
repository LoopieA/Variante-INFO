#include <iostream>
#include <string.h>

using namespace std;

/*
Fiind dat un cuvânt s, format numai din litere, și un cod c, de aceeași lungime cu s, format numai din cifre, numim codificare  a  lui s  pe  baza  codului c  operația  de construire  a  unui nou șir,
în care inițial se copiază prima literă din s, apoi, parcurgând de la stânga la dreapta restul șirului s, se adaugă litera curentă la începutul noului șir,
dacă cifra corespunzătoare de pe aceeași poziție în c este pară, sau la finalul noului șir, în caz contrar.
Scrieţi un program C/C++ care citeşte de la tastatură două cuvinte, notate cu sși c, fiecare având cel mult 10^2 caractere,
s fiind format doar din litere mici ale alfabetului englez, iar cfiind format doar din cifre. După primul cuvânt se tastează Enter.
Programul construiește în memorie și afișează pe ecran cuvântul obținut prin codificarea lui s pe baza lui c, dacă cele două cuvinte au aceeași lungime, sau mesajul cod incorect, în caz contrar.
*/

int main()
{
    int x=0;
    char s[101], c[101], rez[101]={};
    cin.getline(s, 101);
    cin.getline(c, 101);

    rez[x] = s[0];

    for (int i=1; i<strlen(s); i++)
    {
        if (strchr("02468", c[i])) // daca cifra e para
        {
            for (int j=strlen(s)-1; j>=0; j--) // mutam tot sirul cu o pozitie in dreapta
                rez[j+1] = rez[j];
            rez[0] = s[i]; // punem in prima pozitie, acum libera, litera corespunzatoare cifrei
            x++; // actualizam pozitia primei litere introduse in rezultat
        }
        else // daca cifra e impara
        {
            rez[strlen(rez)] = s[i]; // adaugam la sfarsit litera corespunzatoare cifre
        }
    }

    cout << rez;
}
