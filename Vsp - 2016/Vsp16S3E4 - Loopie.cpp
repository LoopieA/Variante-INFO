﻿#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	ofstream file("bac.out");
	while (n >= 1)
	{
		if (n % 2 == 0)
			file << -n / 2 << " ";
		else
			file << (n + 1) / 2 << " ";
		n--;
	}
	file.close();
}

