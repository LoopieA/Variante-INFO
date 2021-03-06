#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int suma, n, m, nvec[100], mvec[100];
	bool flag = false;         //flag pentru afisarea mesajul DA/NU
	ifstream f("numere.in");
	f >> n >> m;
	//parcurgere
	for (int i = 0; i < n; i++)
		f >> nvec[i];
	for (int i = 0; i < m; i++)
		f >> mvec[i];
	int j = 0;
	for (int i = 0; i < m; i++) //parcurgerea vectorului mvec ("redus") 
	{
		suma = 0;
		while (mvec[i] != suma)	//verificare daca exista numere consecutive care se pot reduce din vectorul nvec in vectorul mvec 
		{
			if (j != n)        //daca s-au parcurs toate elementele lui nvec si nu s-a gasit niciun element care poate sa fie redus in mvec, atunci programul iese din structura repetitva si afiseaza mesajul NU
			{
				flag = true;    
				suma += nvec[j];
				j++;
			}
			else				//iesire din structura repetitiva daca nu se gaseste un element care poate sa fie redus din nvec
			{
				flag = false;
				break;
			}
		}
	}
	//afisare mesaj daca se poate reduce vectorul nvec in mvec
	if (flag == true)
		cout << "DA";
	else
		cout << "NU";
    return 0;
}

