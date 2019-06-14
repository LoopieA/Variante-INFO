#include <iostream>
#include <string.h>

using namespace std;

/*
Se consideră un text cu cel mult 100 de caractere, în care cuvintele sunt formate din litere
mari ale alfabetului englez și sunt separate prin câte un spațiu.
Scrieţi un program C/C++ care citeşte de la tastatură un text de tipul menţionat mai sus şi
afișează pe ecran, pe câte un rând, cuvintele care cuprind cel puțin o notă muzicală. Dacă
nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.
Notele muzicale sunt DO, RE, MI, FA, SOL, LA, SI.
*/

int main()
{
    char s[100];
    char *token;
    cin.getline(s, 100);
    token = strtok(s, " ");

    while (token != NULL)
    {
        if (strstr(token, "DO") || strstr(token, "RE") || strstr(token, "MI") || strstr(token, "FA") || strstr(token, "SOL") || strstr(token, "LA") || strstr(token, "SI"))
            cout << token << endl;
        token = strtok(NULL, " ");
    }
}
