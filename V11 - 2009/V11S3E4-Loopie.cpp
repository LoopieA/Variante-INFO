/*
Scrie�i doar antetul func�iei sum care prime�te ca parametru un num�r natural nenul x cu
maximum 9 cifre �i returneaz� suma divizorilor num�rului x.
Exemplu: sum(6) are valoarea 12 (=1+2+3+6).
*/
#include <iostream>

using namespace std;

int sum(unsigned int x)
{
    int s=0;
    for(int d = 1; d<=x; d++)
        if(x % d == 0)
            s+=d;
    return s;
}

int main()
{
    int n, i=0, k=0, x;
    cin >> n;
    while(i != n)
    {
        cin >> x;
        if(sum(x) == x+1)
            k++;
        i++;
    }
    cout << k;
    return 0;
}
