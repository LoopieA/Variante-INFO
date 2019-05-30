/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, ale cărei
elemente primesc valori după cum urmează: elementul din linia i şi coloana j primeşte ca
valoare ultima cifră a produsului i*j (1≤i≤n şi 1≤j≤n).
5.
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe o linie a ecranului, elementele fiecărei linii fiind separate prin câte un
spaţiu. */
#include <iostream>

using namespace std;

int main()
{
	unsigned int n, matrice[25][25];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			matrice[i][j] = (i*j) % 10;
			cout << matrice[i][j] << " ";
		}
		cout << endl;
	}
}