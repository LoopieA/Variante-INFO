#include <iostream>
#include <fstream>

/*
Scrieţi  definiţia  completă  a  unui  subprogram  sub, care  primeşte  prin  intermediul  singurului  său  parametru  n unnumăr  natural  de  maximum  8  cifre
şi  care  returnează  cel  mai mare termen al şirului f care este mai mic sau cel mult egal cu n.

Scrieţi un program C/C++ care citeşte de la tastatură un număr natural s(s≤10000000)
şi determină scrierea lui s ca sumă de termeni distincţi ai şirului dat folosind apeluri utile ale subprogramului sub.
Numerele  astfel  determinate  se  vor  scrie  pe  ecran,  pe  aceeaşi  linie,separate prin câte un spaţiu.
*/

using namespace std;

unsigned int sub(unsigned int n)
{
    unsigned int termen=5;

    if (n <= 5)
    {
        return n;
    }
    else
    {
        while (termen <= n)
        {
            termen *= 2;
        }
        return termen/2;
    }
}


int main()
{
    unsigned int s, aux;

    cin >> s;

    if (s == 0) cout << s;

    while (s > 0)
    {
        aux = sub(s); cout << aux << " ";
        s = s - aux;
    }
}
