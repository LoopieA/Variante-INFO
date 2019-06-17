#include <iostream>
#include <fstream>

using namespace std;

/*
Se citesc de la tastatură două numere naturale din intervalul [1,10^9], x și y, cu cel mult
nouă cifre, unde x are semnificația precizată mai sus, iar y este un termen al sirului dat, si
se cere să se scrie în fisierul text bac.txt, în ordine strict descrescătoare, separați prin
câte un spațiu, toti termenii sirului care sunt mai mici sau egali cu y.
Pentru determinarea termenilor ceruti se utilizează un algoritm eficient din punctul de
vedere al memoriei si al timpului de executare.
*/

int main()
{
    ofstream g("bac.txt");
    unsigned int x, y;
    cin >> x >> y;
    while (y >= x)
    {
        if (y%2 == 0)
        {
            g << y << " ";
            y--;
        }
        else
        {
            g << y << " ";
            y++;
            y /= 2;
        }
    }
    g.close();
    return 0;
}
