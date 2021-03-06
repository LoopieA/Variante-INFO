/*
Se consideră subprogramul P care are doi parametri:
– n, prin intermediul căruia primeşte un număr natural de cel mult 9 cifre
– c, prin intermediul căruia primeşte o cifră.
Subprogramul va furniza tot prin intermediul parametrului n numărul obţinut din n prin
eliminarea tuturor apriţiilor cifrei c. Dacă, după eliminare, numărul nu mai conţine nicio cifră
sau conţine doar cifre 0, rezultatul returnat va fi 0. */
#include <iostream>
#include <fstream>

using namespace std;

int p(int n, int c)
{
	int ncopy = 0;
	if (n == c)
		return 0;
	while (n != 0)
	{
		if (n % 10 == c)
			n = n / 10;
		else
		{
			ncopy = ncopy * 10 + n % 10;
			n = n / 10;
		}
	}
	n = 0;
	while (ncopy != 0)
	{
		n = n * 10 + ncopy % 10;
		ncopy /= 10;
	}
	if (n == 0)
		return 0;
	return n;
}

int main()
{
	int n;
	ifstream f("BAC.IN");
	ofstream g("BAC.OUT");
	while (f >> n)
	{
		for (int i = 1; i <= 9; i += 2)
			n = p(n, i);
		if(n != 0)
			g << n << " ";
	}	
    return 0;
}

