#include <iostream>

using namespace std;

/*
Subprogramul identice are doi parametri, a și b, prin care primește câte un număr
natural (10≤a≤b≤106). Subprogramul afișează pe ecran toate numerele naturale din
intervalul [a,b] care au toate cifrele identice. Numerele afișate sunt separate prin câte un
spațiu, iar dacă nu există astfel de numere, se afişează pe ecran mesajul nu exista.
Scrieţi definiţia completă a subprogramului.
*/

void identice(unsigned int a, unsigned int b)
{
    unsigned int aux, exista=0;
    while (a <= b)
    {
        aux = a;
        while (aux > 9)
        {
            if (aux%10 == (aux/10)%10)
                aux = aux / 10;
            else
                break;
        }
        if (aux <= 9)
        {
            exista = 1;
            cout << a << " ";
        }
        a++;
    }
    if (exista == 0)
        cout << "Nu exista";
}

int main()
{
    identice(700, 1500);
}
