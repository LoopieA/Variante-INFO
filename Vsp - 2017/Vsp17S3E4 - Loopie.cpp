#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int m, n, sirA, sirB, firstA, lastA, max = 0, i = 0, prev;
	ifstream f("bac.in");
	f >> m >> n;
	f >> firstA;
	while (i!=m-1)
	{
		f >> sirA;
		i++;
	}
	lastA = sirA;
	i = 1;
	while (i != n)
	{
		f >> sirB;
		if(i>1)
		{ 
			if (sirB > lastA)
			{
				if (prev < firstA)
				{
					max = i;
					break;
				}
			}
		}
		i++;
		prev = sirB;
	}
	if (max == 0)
		cout << "Imposibil";
	else
		cout << max;
	return 0;
}

