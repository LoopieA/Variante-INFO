/*
Într-un text cu cel mult 100 de caractere cuvintele sunt formate numai din litere mari și mici ale
alfabetului englez și sunt separate prin câte un spațiu. Scrieţi un program C/C++ care citeşte de la
tastatură un text de tipul precizat, apoi un număr natural, n (n∈[1,102)), şi afişează pe ecran, pe linii
separate, cuvintele din text care au exact n litere. Cuvintele sunt afişate în ordinea apariţiei lor în
text, iar dacă nu există niciun astfel de cuvânt, se afișează pe ecran mesajul nu exista.
Exemplu: dacă se citește textul Fat Frumos este cel mai viteaz
iar n=6, se afişează pe ecran:
Frumos
viteaz */
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	
	char str[101], *temp;
	int n;
	cin.getline(str, 100);
	cin >> n;
	temp = strtok(str, " ");
	while (temp != NULL)
	{
		if (strlen(temp) == n)
			cout << temp << endl;
		temp = strtok(NULL, " ");
	}
    return 0;
}

