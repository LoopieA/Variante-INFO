//a little less efficient than Luchian's version
#include <iostream>

using namespace std;

/*
Scrieţi  un  program  C/C++  care  citeşte  de  la  tastatură  o  valoare  naturală  nenulă n (n≤20), apoi  un  şir  de  n  numere  naturale,  având  fiecare  exact  5  cifre.
Dintre  cele  n  numere  citite,  programul  determină  pe  acelea  care  au  toate  cifrele  egale  şi  le  afişează  pe  ecran,  în  ordine  crescătoare, separate prin câte un spaţiu.
*/

unsigned int egal(int n) //verifica daca cifra precedenta este egala cu cifra curenta
{
	int ncopy = n%10; //memorarea initiala a cifrei
	while (n != 0)
	{	
		if (n % 10 != ncopy)
			return 0;
		ncopy = n % 10; //memorarea cifrei precedente
		n = n / 10; 
	}
	return 1;
}

int main()
{
	int n, sir[20], aux;
	cin >> n;
	//citirea sirului
	for (int i = 0; i < n; i++)
		cin >> sir[i];

	//sortare crescatoare
	for (int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
			if (sir[i] > sir[j])
			{
				aux = sir[i];
				sir[i] = sir[j];
				sir[j] = aux;
			}
	}
	//verificare si afisare
	for (int i = 0; i < n; i++)
		if(egal(sir[i]) == 1)
			cout << sir[i];
	return 0;
}