#include <iostream>
#include <fstream>

using namespace std;
//problema se poate face in doua moduri cu ajutorul cautarii binare sau cautarii secventiale
//avantajul cautarii binare este eficienta (O(log(n))
//stiind din problema ca sirul este sortat, putem folosi cautarea binara	

bool CautareBinara(int x, int V[], int dim)
{
	int Left = 0, Right = dim-1; //vectorul contine toate numerele fisierului, inclusiv pe "x", asadar extremitatea dreapta trebuie sa fie cu 1 mai putin decat dimensiunea vectorului
	bool flag = false; //flag pentru afisarea mesajului DA/NU
	while (Left <= Right)
	{
		int Mid = (Left + Right) / 2;
		if (V[Mid] == x)
		{
			flag = true;
			break;
		}
		if (V[Mid] > x)
			Right = Mid - 1;
		if (V[Mid] < x)
			Left = Mid + 1;
	}
	return flag;
}

bool CautareSecventiala(int x, int v[], int dim)
{
	bool flag = false;
	for (int i = 0; i < dim - 1; i++)
		if (v[i] == x)
		{
			flag = true;
			break;
		}
	return flag;
}

int main()
{
	int numere[101], dim=0;
	bool flag = false;
	ifstream f("bac.txt");

	//inserarea sirului din fisier in vector
	while (!f.eof())
		f >> numere[dim++];
	int x = numere[dim-1];  
	
	if (CautareBinara(x, numere, dim-1) == true)
		cout << "DA";
	else
		cout << "NU";
	return 0;
}