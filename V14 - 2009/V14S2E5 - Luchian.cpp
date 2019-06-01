#include <iostream>

using namespace std;

int main()
{
        unsigned int n, a[9][9], aux, contor=0;

        cin >> n;
        aux = n;

        while (aux != 0)
        {
                aux = aux / 10;
                contor++;
        }

        for (int i=0; i<contor; i++)
        {
                for (int j=0; j<contor; j++)
                        a[j][i] = n%10;
                n = n/10;
        }

        for (int i=0; i<contor; i++)
        {
                for (int j=0; j<contor; j++)
                        cout << a[i][j];
                cout << endl;
        }

        return 0;
}
