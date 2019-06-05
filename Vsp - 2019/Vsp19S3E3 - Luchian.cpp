#include <iostream>
#include <fstream>

using namespace std;

/*
Șirul f  este  definit  astfel: f1=x; f2=y; f3=z; fi=fi-1+fi-2-fi-3,  unde x, y, zși i  sunt  numere naturale nenule, i>3.
De exemplu, dacăx=1, y=2și z=4șirul este: 1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, ...
Se citesc de la tastatură un număr natural, n (n∈[1,104]), apoi trei numere naturale din intervalul [1,102), x, yși z, reprezentând,
în această ordine, primii trei termeni ai șirului precizat mai sus. Se cere să se scrie în fișierul bac.txtprimii n termeni ai șirului,
separați prin câte un spațiu, în ordine inversă  a  apariției  lor  în șir.
Proiectați  un  algoritm  eficient  din  punctul  de  vedere  al  timpului  de executare și al spațiului de memorie utilizat.
*/

unsigned int f(unsigned int n, unsigned int x, unsigned int y, unsigned int z) // subproframul returneaza al n-lea termen al sirului
{
    if (n == 1)
        return x;
    else if (n == 2)
        return y;
    else if (n == 3)
        return z;

    return f(n-1, x, y, z) + f(n-2, x, y, z) - f(n-3, x, y, z);
}

int main()
{
    ofstream g("bac.txt");
    unsigned int n, x, y, z;

    cin >> n;

    if (n >= 1 && n < 10000) // verificam daca n apartine intervalului [1, 10^4)
        cin >> x >> y >> z;

    if (x < 100 && y < 100 && z < 100 && x+y+z >= 3) // verificam daca x, y si z apartin intervalului [1, 10^2)
    {
        for (int i=n; i>=1; i--)
            g << f(i, x, y, z) << " "; // afisam primii n termeni ai sirului, in ordine descrescatoare
    }
}
