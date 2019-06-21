#include <iostream>

using namespace std;

/*
Un interval cu proprietatea că există un singur număr natural, n (2≤n), pentru care valoarea produsului 1·2·3·...·n aparține acestui interval
este numit interval factorial al lui n. Exemplu:[5,8] și [3,23] sunt intervale factoriale ale lui 3, dar [1,15] și [7,10] nu sunt intervale factoriale
ale niciunui număr. Se consideră subprogramul interval, cu trei parametri: •n, prin care primește un număr natural din intervalul [2,10]. •a și b,
prin  care  furnizează  câte  un  număr  natural,
astfel  încât  expresia b-a  să  aibăvaloare maximă, iar [a,b] să fie interval factorial al lui n.
*/

void interval(unsigned int n, unsigned int &a, unsigned int &b)
{
    unsigned int p=1;

    for (unsigned int i=2; i<=n; i++)
        p = p * i;

    a = p/n + 1;
    b = p*(n+1) - 1;
}

int main()
{
    unsigned int n, a, b;
    interval(n, a, b);
    cin >> n;
    cout << a << " " << b;
}
