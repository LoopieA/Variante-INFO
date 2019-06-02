#include <iostream>

using namespace std;

/*
Scrieţi  un  program  C/C++  care  citeşte  de  la  tastatură  un  număr  natural  cu  exact
5  cifre  şi construieşte în memorie o matrice cu 6  linii  şi 6 coloane, numerotate de la 1  la  6, formată astfel:
- elementele aflate pe diagonala principală sunt toate nule; - elementele de pe linia 1, aflate deasupra diagonalei principale precum
şi elementele de pe coloana 1,  aflate  sub  diagonala  principală  au  toate  valoarea  egală  cu  cifra  unităţilor numărului citit;
- elementele de pe linia 2, aflate deasupra diagonalei principale precum şi elementele de pe coloana 2,
aflate sub diagonala principală au toate valoarea egalăcu cifra zecilor numărului citit, şi aşa mai departe, ca în exemplu.
*/

int main()
{
    unsigned int n, a[8][8]={0};
    cin >> n;

    if (n/100000 == 0 && n/10000 != 0)
    {
        for (int i=1; i<=6; i++)
        {
            for (int j=1; j<=6; j++)
            {
                if (i != j && i < j)
                {
                    a[i][j] = n%10;
                    a[j][i] = n%10;
                }
            }
            n = n/10;
        }

        for (int i=1; i<=6; i++)
        {
            for (int j=1; j<=6; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
}
