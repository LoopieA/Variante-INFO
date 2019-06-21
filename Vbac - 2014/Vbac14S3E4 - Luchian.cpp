#include <iostream>
#include <fstream>

using namespace std;

/*
Un  număr  natural x,  format  din  exact  două  cifre,  este  numit sub-număr  al  unui  număr natural y dacă cifrele lui x apar, în aceeași ordine, pe ranguri consecutive, în numărul y.
Exemplu:21 este sub-număr al lui 12145, al lui 213, al lui 21, dar nu și al lui 123 sau al lui 231.
Fișierul bac.txt conține  cel  mult 1000000  de  numere  naturale  din  intervalul  [10, 109], separate prin câte un spațiu.
Se cere să se afișeze pe ecran, separate prin câte un spațiu, sub-numerele care apar de cele  mai  multe  ori  în  scrierea  numerelor  din  fișier.
Pentru  determinarea  sub-numerelor cerute se utilizează un algoritm eficient din punctul de vedere al timpului de executare.
*/
int main()
{
    unsigned int n, a, b, v[101]={0}, max=0;
    ifstream f("date.txt");

    while (f >> n)
    {
        while (n > 9)
        {
            a = n%10;
            b = (n/10)%10;
            v[b*10 + a]++;
            n = n/10;
        }
    }

    for (int i=0; i<100; i++)
        if (v[i] > max)
            max = v[i];

    for (int i=0; i<100; i++)
        if (v[i] == max)
            cout << i << " ";
}
