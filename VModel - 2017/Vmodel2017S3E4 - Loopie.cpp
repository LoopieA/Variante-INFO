/*
Subprogramul nrDiv are doi parametri, a și b (a≤b), prin care primeşte câte un număr natural din intervalul [1,109]. Subprogramul returnează 
numărul valorilor din intervalul [a,b] care pot fi scrise ca produs de două numere naturale consecutive. Scrieţi definiţia completă a subprogramului. */
#include <iostream>

using namespace std;

int nrDiv(int a, int b)
{
	int i = 1, j = 2, k=0;
	while (i*j <= b)
	{
		if (i*j > a && i*j < b)
			k++;
		i++;
		j++;
	}
	return k;
}

int main()
{
	cout << nrDiv(10, 40);
    return 0;
}

