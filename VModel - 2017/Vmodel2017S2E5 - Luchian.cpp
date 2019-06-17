#include <iostream>
#include <string.h>

using namespace std;
/*
Un text are cel mult 100 de caractere, iar cuvintele sale sunt formate doar din litere mici ale
alfabetului englez si sunt separate prin câte un spațiu.
Scrieti un program C/C++ care citeste de la tastatură un text de tipul precizat mai sus si îl
transformă în memorie prin înlocuirea fiecărui cuvânt format din număr par de litere cu
simbolul #. Programul afisează pe ecran textul obtinut sau mesajul nu exista dacă textul
citit nu conține astfel de cuvinte.
*/
int main()
{
    bool flag=false;
    char s[100], rezultat[100]={};
    char *token;
    cin.getline(s, 100);

    token = strtok(s, " ");
    while (token != NULL)
    {
        if (strlen(token)%2 == 0)
        {
            flag = true;
            strcat(rezultat, "# ");
        }
        else
        {
            strcat(rezultat, token);
            strcat(rezultat, " ");
        }
        token = strtok(NULL, " ");
    }

    if (flag == false)
        cout << "nu exista";
    else
    {
        strcpy(s, rezultat);
        cout << s;
    }
    return 0;
}
