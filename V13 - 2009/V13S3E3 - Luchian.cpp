#include <iostream>

using namespace std;

/*
Se considerăşirul 1,  2,1,  3,2,1,  4,3,2,1, ... construit  astfel:  prima  grupă  este  formată  din  numărul 1,
a  doua  grupă  este  formată  din  numerele 2 şi 1, iar grupa a k-a, este formată din numerele k, k-1,..., 1.
Se cere să se citescă de la tastatură un număr natural n (n≤1000) şi să se afişeze pe ecran cel de al  n-lea termen al şirului dat
*/

int main()
{
    unsigned int nr, a, b=1;

    cin >> nr;

    if (nr <= 1000)
    {
        while (nr != 0) // se formeaza sirul dat, iar la fiecare termen format se scade 1 din numarul pe care vrem sa il aflam;
        {               // astfel, cand variabila nr ajunge la 1, urmatorul termen este cel cautat si il putem afisa
            a = b;

            while (a != 0) // formarea "grupelor"
            {
                if (nr != 1)
                {
                    a--;
                    nr--;
                }
                else // cand nr are valoare 1, afisam numarul la care am ajuns prin formarea sirului si nr devine 0, iesind din while
                {
                    cout << a;
                    nr = 0;
                }
            }

            b++;
        }
    }

    cout << nr;

    return 0;
}
