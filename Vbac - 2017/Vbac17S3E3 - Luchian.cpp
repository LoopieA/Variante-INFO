#include <iostream>

using namespace std;

/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n [2,50]) şi
cele n elemente ale unui tablou unidimensional, numere naturale din intervalul [0,10^4].
Cel puțin două elemente ale tabloului sunt nenule. Programul modifică în memorie tabloul
prin ordonarea descrescătoare a elementelor nenule ale acestuia, celelalte elemente
păstrându-şi poziția iniţială, apoi afișează pe ecran elementele tabloului obținut, separate
prin câte un spațiu.
*/

int main()
{
    unsigned int n, v[51], aux;
    cin >> n;

    //verificam daca n este intre 2 si 50
    if (n < 2 || n > 50)
        return 0;

    //citim sirul si il introducem intr-un vector
    for (int i=0; i<n; i++)
        cin >> v[i];

    //parcurgem sirul
    for (int i=0; i<n-1; i++)
    {
        //daca numarul pe care am ajuns este 0, trecem la urmatorul numar
        if (v[i] == 0)
            continue;
        //sortam numerele diferite de 0
        for (int j=i; j<n; j++)
        {
            if (v[j] != 0 && v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    //afisam sirul
    for (int i=0; i<n; i++)
        cout << v[i] << " ";

    return 0;
}
