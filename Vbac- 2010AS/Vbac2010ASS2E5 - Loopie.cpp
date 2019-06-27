#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[100]="Reprezentat cu    4 zecimale PI este 3.1415 si e este 2.7182";
	for (int i = 0; i < strlen(s); i++)
	{
		if (isdigit(s[i]) && (s[i - 1] == '.' || s[i + 1] == '.'))
			while (s[i] != ' ')
				i++;
		else
			cout << s[i];
	}
}

