#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int a[50][50], n, m;
	ifstream f("bac.txt");
	f >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			f >> a[i][j];
	int ultim = a[n][m];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (i == 1 || j == 1 || j == m || i == n)
				a[i][j] = ultim;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

