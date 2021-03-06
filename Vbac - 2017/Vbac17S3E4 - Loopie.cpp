/*
Numim secvență pară într-un șir o succesiune de termeni ai șirului cu proprietatea că sunt
numere pare și că se află pe poziții consecutive în șir; orice secvență are cel puțin doi
termeni și este maximală în raport cu proprietatea precizată (dacă i se adaugă un alt
termen, secvența își pierde această proprietate). Lungimea secvenței este egală cu
numărul termenilor săi.
Fişierul bac.txt conţine un şir de cel mult 106
numere naturale din intervalul [0,109].
Numerele din şir sunt separate prin câte un spaţiu.
Se cere să se afişeze pe ecran numărul de secvențe pare de lungime maximă din șir.
Proiectați un algoritm eficient din punctul de vedere al spațiului de memorie utilizat şi al
timpului de executare. */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int x, max = 0, k=0, prevx=-1, maxk=0;
	ifstream f("bac.txt");
	while (f >> x)
	{
		if (prevx % 2 == 0 && x % 2 == 0)  //daca se indeplineste conditia se numara termenii subsirului
			k++;
		else
		{
			k++;    
			if (max <= k)  //verificare daca exista un nou maxim
			{
				max = k;
				maxk = 0; 
			}
			if (max == k) //in cazul in care k este egal cu maxim se incrementeaza valoarea maxk pentru a numara cate secvente pare maxime exista
				maxk++; 
			k = 0;  //trecerea la urmatorul sir
		}
		prevx = x; //numarul anterior
	}
	k++; //testare pentru sir final
	if (max == k)
		maxk++;
	cout << maxk;
    return 0;
}

