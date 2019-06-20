#include <iostream>
#include <string.h>

using namespace std;

/*
Scrieţi un program C/C++ care citeşte de la tastatură, în această ordine, un număr natural n, apoi n cuvinte, separate prin Enter, urmate de un număr natural k.
Numerele citite sunt din  intervalul [1,20],  iar  fiecare  cuvânt  este  format  din  cel  mult 20  de  caractere,  numai litere  mici  ale  alfabetului  englez.
Cel  puţin  unul  dintre  cuvinte  are k  litere.
Programul construiește  în  memorie,  apoi  afișează  pe  ecran,  un șir  care  să  cuprindă  cuvintele  citite, separate prin câte un spațiu,
astfel încât toate cele care au k litere să ocupe primele poziţii, iar celelalte să se regăsească în continuarea acestora, într-o ordine oarecare.
*/

int main()
{
    char sir[401]={}, aux1[401]={}, aux2[401]={}, cuvant[21], *token;
    unsigned int n, k;
    cin >> n;
    for (int i=0; i<=n; i++)
    {
        cin.getline(cuvant, 21);
        strcat(sir, cuvant);
        strcat(sir, " ");
    }
    cin >> k;
    token = strtok(sir, " ");
    while (token != NULL)
    {
        if(strlen(token) == k)
        {
            strcat(aux1, token);
            strcat(aux1, " ");
        }
        else
        {
            strcat(aux2, token);
            strcat(aux2, " ");
        }
        token = strtok(NULL, " ");
    }
    strcpy(sir, aux1);
    strcat(sir, aux2);
    cout << sir;
}
