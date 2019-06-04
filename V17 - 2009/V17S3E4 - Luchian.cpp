#include <iostream>
#include <fstream>

using namespace std;

/*
În fişierul numere.txt pe prima linieeste memorat un număr natural n (n≤10000), iar pe linia următoare un şir de n numere naturale distincte două câte două,
separate prin câte un spaţiu,  cu  maximum  4  cifre  fiecare.  Se  cere  afişarea  pe  ecran  a  poziţiei  pe  care  s-ar  găsi primul  element  din  şirul  aflat  pe  linia  a  doua  a  fişierului,
în  cazul  în  care  şirul  ar  fi  ordonat  crescător. Numerotarea poziţiilor elementelor în cadrul şirului  este  de  la  1  la  n.
Alegeţi  un  algoritm  de  rezolvare  eficient  din  punct  de  vedere  al  memoriei  utilizate  şi al  timpului  de  executare.
*/

int main()
{
    ifstream f("numere.txt");
    unsigned int n, nr, contor=0;

    f >> n;

    if (n <= 10000) // verificam daca n este mai mic de 10000
    {
        f >> nr; // citim primul numar din sir

        while (f >> n) // parcurgem sirul si crestem valoarea contorului cand gasim un numar mai mic decat primul numar din sir
            if (n < nr)
                contor++;
    }
    cout << contor+1;
}
