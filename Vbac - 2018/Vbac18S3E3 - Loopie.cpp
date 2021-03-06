/*
Subprogramul resturi are patru parametri, n, x, y și r, prin care primeşte câte un număr natural din intervalul [1,109], r<x<y<n. Subprogramul returnează numărul de valori 
naturale din intervalul [1,n] pentru care atât restul împărțirii la x, cât și restul împărțirii la y, sunt egale cu r.   
Scrieţi definiţia completă a subprogramului.
*/
#include <iostream>

using namespace std;

int resturi(int n, int x, int y, int r)
{
	int k = 0;
	for (int i = 1; i <= n; i++)
		if (i % x == r && i % y == r)
			k++;
	return k;
}

int main()
{
	cout << resturi(200, 5, 14, 2);
    return 0;
}

