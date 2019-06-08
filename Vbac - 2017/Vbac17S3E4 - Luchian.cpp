#include <iostream>
#include <fstream>

using namespace std;

/*
Numim secvență pară într-un șir o succesiune de termeni ai șirului cu proprietatea că sunt
numere pare și că se află pe poziții consecutive în șir; orice secvență are cel puțin doi
termeni și este maximală în raport cu proprietatea precizată (dacă i se adaugă un alt
termen, secvența își pierde această proprietate). Lungimea secvenței este egală cu
numărul termenilor săi.
Fişierul bac.txt conţine un şir de cel mult 106 numere naturale din intervalul [0,109].
Numerele din şir sunt separate prin câte un spaţiu.
Se cere să se afişeze pe ecran numărul de secvențe pare de lungime maximă din șir.
Proiectați un algoritm eficient din punctul de vedere al spațiului de memorie utilizat şi al
timpului de executare.
*/

//subprogramul verifica daca valoarea lungimii unui subsir este cea mai mare valoare gasita
//pana acum si contorizeaza cate astfel de valori exisa
void check_lungime(unsigned int &lungime, unsigned int &max, unsigned int &max_nr)
{
    if (lungime > max)
    {
        max = lungime;
        max_nr = 1;
    }
    else if (lungime == max)
        max_nr++;
}

int main()
{
    ifstream f("date.txt");
    unsigned int a, b, lungime=1, max=0, max_nr=0;

    f >> a;
    //parcurgem sirul
    while (f >> b)
    {
        //daca avem doua numere pare consecutive crestem lungime
        if (a%2 == 0 && b%2 == 0)
            lungime++;
        //daca numarul citit sparge secventa para verificam lungimea ei
        //si cautam urmatoarele siruri
        else
        {
            check_lungime(lungime, max, max_nr);
            lungime = 1;
        }
        a = b;
    }
    //in cazul in care ultimele numere din sir formeaza o secventa para
    //secventa de mai sus nu ii mai verifica lungimea, asa ca o verificam separat
    check_lungime(lungime, max, max_nr);

    cout << max_nr;
}
