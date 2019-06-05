#include <iostream>
#include <string.h>

using namespace std;

/*
Într-un  text  cu  cel  mult 100  de  caractere  cuvintele  sunt  formate  numai  din  litere  mari și  mici  ale alfabetului  englez și  sunt  separate  prin  câte  un  spațiu.
Scrieţi  un  program  C/C++  care  citeşte  de  la tastatură un text de tipul precizat, apoi un număr natural, n (n[1,10^2)),
şi afişează pe ecran, pe linii separate,  cuvintele  din  text  care  au  exact n  litere.
Cuvintele  sunt  afişate  în  ordinea  apariţiei  lor  în text, iar dacă nu există niciun astfel de cuvânt, se afișează pe ecran mesajul nu exista.
*/

int main()
{
    char v[100];
    unsigned int n, i=0, pozitie, lungime, nu_exista=1;

    cin.getline(v, 100); // citim sirul de caractere
    cin >> n;            // citim pe n

    if (n < 1 || n > 100) // daca n nu se incadreaza in conditile date in cerinte programul se opreste
        return 0;

    while (i < strlen(v)) // parcurgem sirul de caractere
    {
        if (i == 0 && v[i] != ' ') // verifica primul cuvant din sir
        {
            pozitie = i;
            lungime = 0;
            while (v[i] != ' ') // parcurgem cuvantul si ii gasim lungimea
            {
                lungime = lungime+1;
                i = i+1;
            }
            if (lungime == n) // daca lungimea este egala cu n afisam cuvantul
            {
                for (int j=pozitie; j<pozitie+lungime; j++)
                    cout << v[j];
                cout << endl;
                nu_exista = 0; // daca gasim vreun cuvant cu lungimea specificata variabila nu_exista devine 0
            }
        }
        if (v[i] == ' ') // verificam cuvintele care incep dupa spatii
        {
            i = i+1; // incepem verificarea de la urmatoarea litera dupa spatiu
            pozitie = i;
            lungime = 0;
            while (v[i] != ' ' && i != strlen(v)) // parcurgem cuvantul si ii gasim lungimea, luand in considerare ca ar putea fi ultimul cuvant din sir
            {
                lungime = lungime+1;
                i = i+1;
            }
            if (lungime == n) // daca lungimea este egala cu n afisam cuvantul
            {
                for (int j=pozitie; j<pozitie+lungime; j++)
                    cout << v[j];
                cout << endl;
                nu_exista = 0;
            }
        }
    }

    if (nu_exista == 1) // daca variabila nu_exista a ramas egala cu 1 inseamna ca nu a fost gasit niciun cuvant, asa ca afisam "Nu exista"
        cout << "Nu exista";
}
