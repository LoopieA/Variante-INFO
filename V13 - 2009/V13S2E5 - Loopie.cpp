/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, ale cărei
elemente primesc valori după cum urmează:
- elementele aflate pe diagonala secundară sunt toate nule;
- elementele de pe coloana i (1≤i≤n), aflate deasupra diagonalei secundare, au valoarea
egală cu i;
- elementele de pe linia n-i+1 (1≤i≤n), aflate sub diagonala secundară, au valoarea egală
cu i. 
*/
#include <iostream>

using namespace std;

int main()
{
	int mat[25][25] = { 0 }, n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i + j < n + 1)
				mat[i][j] = j;
			if (i + j > n + 1)
				mat[i][j] = n - i + 1;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << mat[i][j] << " ";
		cout << endl;
	}
    return 0;
}

