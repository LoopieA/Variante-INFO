/*
Subprogramul minDivPrim are un singur parametru, n, prin care primeşte un număr
natural (n∈[2,109]). Subprogramul returnează cel mai mic număr natural care are
aceiași divizori primi ca n.
Scrieţi definiţia completă a subprogramului. 
*/
#include <iostream>

using namespace std;

int prim(int d)
{
	for (int div = 2; div <= d / 2; div++)
		if (d%div == 0)
			return 0;
	return 1;
}

int minDivPrim(int n)
{
	int numar = 1;
	for (int d = 2; d <= n; d++)
		if (n%d == 0 && prim(d))
			numar = numar*d;

	return numar;
}

int main()
{
	int n;
	cin >> n;
	cout << minDivPrim(n);
    return 0;
}

