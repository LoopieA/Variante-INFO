#include <iostream>
#include <string.h>

/*
Se  consideră  un  text  cu  maximum  255  de  caractere,  format  din  litere  mici  ale  alfabetului  englez şi spaţii. Textul conţine cel puţin o consoană.
Scrieţi un program C/C++care citeşte de  la  tastatură  textul  şi  apoi  determină  transformarea  acestuia,  eliminând  numai  ultima  consoană care apare în text, ca în exemplu.
Programul va afişa pe ecran textul obţinut.
*/

using namespace std;

int main()
{
    char s[256];
    cin.getline(s, 256);

    for (int i=strlen(s)-1; i>=0; i--) // se verifica sirul de la coada spre cap si se cauta ultima consoana
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            for (int j=i; j<strlen(s); j++) // cand ultima consoana este gasita o eliminam prin inlocuirea elementului s[j] cu elementul s[j+1] iar apoi ultimul element primeste valoarea NULL
            {
                if (j == strlen(s)-1) s[j] = NULL;
                else s[j] = s[j+1];
            }
            break;
        }
    }

    cout << s;
}
