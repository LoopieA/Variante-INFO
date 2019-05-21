#include <iostream>

using namespace std;

int radical(unsigned int a)
{
	int x = 1;
	do
		x++;
	while (x*x <= a);
	return x-1;
}

int main()
{
	unsigned int n;
	cin >> n;
	if (n == radical(n)*radical(n))
		cout << "Da";
	else
		cout << "Nu";
	return 0;
}