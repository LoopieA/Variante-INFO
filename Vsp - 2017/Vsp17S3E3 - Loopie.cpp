#include <iostream>

using namespace std;

void identice(int a, int b)
{
	int numar;
	for (int n = a; n <= b; n++)
	{
		numar = n;
		while (numar > 9)
		{
			if (numar % 10 == (numar / 10) % 10)
				numar = numar / 10;
			else
				break;
		}
		if (numar <= 9)
			cout << n << " ";
	}
}

int main()
{
	identice(700, 1500);
    return 0;
}

