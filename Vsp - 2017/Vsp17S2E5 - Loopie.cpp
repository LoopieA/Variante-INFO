#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[100];
	cin.getline(s, 100);
	char *cuv = strtok(s, " ");
	while (cuv != NULL)
	{

		if (strstr(cuv, "DO") || strstr(cuv, "RE") || strstr(cuv, "MI") || strstr(cuv, "FA") || strstr(cuv, "SOL") || strstr(cuv, "LA") || strstr(cuv, "SI"))
			cout << cuv << endl;
		cuv = strtok(NULL, " ");
	}
    return 0;
}

