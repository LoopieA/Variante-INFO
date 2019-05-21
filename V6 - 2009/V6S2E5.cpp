#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[256];

    cin.getline(s, 256);

    for(int i=0; i<strlen(s); i++)
    {
        if (i == 0) s[i] -= 32;
        if (s[i] == ' ' and s[i+1] != ' ') s[i+1] -= 32;
    }

    cout << s;
}
