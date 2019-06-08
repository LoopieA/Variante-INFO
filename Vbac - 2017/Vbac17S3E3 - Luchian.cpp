#include <iostream>

using namespace std;

/*
Subprogramul duplicare are un singur parametru, n, prin care primește un număr
natural (nÎ[1,10^4)). Subprogramul furnizează, prin același parametru, numărul obţinut
din n prin inserarea, după fiecare cifră pară din scrierea lui, a unei cifre egale cu jumătate
din aceasta.
Scrieți definiția completă a subprogramului.
*/

void duplicare(unsigned int &n)
{
    unsigned int v[11], lungime=0;
    //mutam numarul n intr-un vector
    while (n != 0)
    {
        v[lungime] = n%10;
        n = n/10;
        lungime++;
    }
    //parcurgem numarul
    for (int i=0; i<lungime; i++)
    {
        //cand gasim o cifra para
        //mutam toate elementele pana la cifra respectiva impreuna cu cifra o pozitie in dreapta
        //iar pe pozitia ramasa libera se introduce valoarea ceruta (jumatate din valoarea cifrei pare)
        if (v[i]%2 == 0)
        {
            for (int j=lungime-1; j>=i; j--)
            {
                v[j+1] = v[j];
            }
            v[i] = v[i+1]/2;
            lungime++;
            i++;
        }
    }
    //reconstruim numarul
    for (int i=lungime-1; i>=0; i--)
    {
        n = n*10 + v[i];
    }

}

int main()
{
    unsigned int n; cin >> n;
    duplicare(n);
    cout << n;
}
