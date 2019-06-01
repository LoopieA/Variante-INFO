#include <iostream>
#include <fstream>

using namespace std;

void sub(ifstream &f, unsigned int &contor_nr_pare)
{
        unsigned int v[5];

        for (int i=0; i<5; i++)
        {
                if (f >> v[i])
                        cout << v[i] << " ";
                if (v[i] % 2 == 0)
                        contor_nr_pare++;
        }
        cout << endl;
}

int main()
{
        ifstream f("BAC.TXT");
        unsigned int contor_nr_pare=0;

        while (f) sub(f, contor_nr_pare);
        cout << contor_nr_pare;

        f.close();
        return 0;
}
