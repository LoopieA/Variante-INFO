#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("date.txt");

    int x, k, numar, aux, term1=1, term2=1;

    f >> x >> k >> numar;
    f.close();

    for (int i=0; i<k-2; i++)
    {
        aux = term2;
        term2 = term1 + term2;
        term1 = aux;
    }

    if (x < 10) aux = term2 - term1;
    else aux = 2 * (term2 - term1);

    for (int i=0; i<aux; i++)
    {
        numar = numar / 10;
    }

    cout << numar;
}
