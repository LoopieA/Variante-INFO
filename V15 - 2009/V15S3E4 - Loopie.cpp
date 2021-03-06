/*
În fişierul text BAC.IN se găsesc, pe o singură linie, separate prin câte un spaţiu, mai multe
numere naturale de cel mult 6 cifre fiecare. Se cere să se determine şi să se afişeze pe
ecran, separate printr-un spaţiu, ultimele două numere impare (nu neapărat distincte) din
fişierul BAC.IN. Dacă în fişier se găseşte un singur număr impar sau niciun număr impar se
va scrie pe ecran mesajul Numere insuficiente. */
#include <iostream>
#include <fstream>

using namespace std;

int k = 0, v[2]; //k - contor pentru a verifica cate numere impare au fost introduse in vector; v[2] - vector pentru memorarea ultimelor doua numere
void reversefile(ifstream &f) //functie recursiva pentru citirea inversa a fisierului
{
	int x; 
	if (f >> x)
	{
		reversefile(f);
		if ((x % 2 == 1) && (k != 2))  //verificare daca numarul citit este impar si contorul nu a depasit 2
		{
			if (k == 0)  //cand se citeste primul numar impar, se introduce in vector pe ultima pozitie deoarece fisierul fiind citit invers primul numar citit in functie este de fapt ultimul
				v[1] = x;
			else
				v[0] = x; //analog cu k==0
			k++;
		}
	}
}

int main()
{
	ifstream f("BAC.IN");
	reversefile(f);
	if (k == 0 || k == 1)
		cout << "Numere insuficiente";
	else
		cout << v[0] << " " << v[1]; //afisarea ultimelor doua numere
    return 0;

}

