#include <iostream>
#include <fstream>

/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤100)şi cele 3*n elemente ale tabloului unidimensional v,
fiecare element fiind un număr natural cu cel mult  patru  cifre  fiecare.  Tabloul  este  împărţit  în  trei  zone,  cu  câte  n  elemente:
prima  zonăconţine  primele  n  elemente  din  tablou,  a  doua  zonă  conţine  următoarele n  elemente  din  tablou,  restul  elementelor  fiind  în  zona  a  treia.
Programul  va  interschimba  primul  element  par (dacă există) al zonei unu cu ultimul element impar (dacă există) al zonei trei şi apoi va scrie  pe  prima  linie  a  fişierului  text  BAC.TXT
toate  elementele  tabloului,  separate  prin  câte  un   spaţiu.
În   cazul   în   care   unul   dintre   aceste   două   elemente,   care   urmează   a   fi   interschimbate, nu există, programul nu va efectua nici o modificare asupra tabloului dat
*/

using namespace std;

int main()
{
    int n, v[301], aux;
    ofstream g("BAC.txt");

    cin >> n;

    for (int i=0; i<3*n; i++) // citirea vectorului
    {
        cin >> v[i];
    }

    for (int i=0; i<n; i++)
    {
        if (v[i]%2 == 0) // daca gaseste un numar par in primul segment al vectorului trece mai departe
        {
            for (int j=3*n-1; j>2*n-1; j--)
            {
                if (v[j]%2 != 0) // daca gaseste un numar impar in ultimul segment al vectorului interschimba cele doua valori
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
                break;
            }
            break;
        }
    }

    for (int i=0; i<3*n; i++)
    {
        g << v[i] << " ";
    }

    g.close();
}
