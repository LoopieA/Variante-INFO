#include <iostream>

using namespace std;

/*
Scrieţi un program C/C++ care citeşte de la tastaturăun număr natural nenul, cu maximum 8  cifre,  
construieşte  în  memorie  şi  afişează  apoi  pe  ecran  o  matrice  pătratică,  
având  numărul  de  linii  şi  de  coloane  egal  cu  numărul  de  cifre  ale  numărului  dat,  
completată  cu  cifrele numărului citit.  5. Astfel, elementele de pe prima coloană  a  matricei  
vor fi toate egale cu cifra  unităţilor  numărului  dat,  elementele  de  pe  a  doua  coloană  a  matricei  vor  fi  
toate  egale  cu  cifra  zecilor  numărului  dat,  şi  aşa  mai  departe
*/

int main()
{
        unsigned int n, a[9][9], aux, contor=0;

        cin >> n;
        aux = n;

        while (aux != 0) // aflam cate cifre are numarul citit 
        {
                aux = aux / 10;
                contor++;
        }

        for (int i=0; i<contor; i++) // construierea matricei
        {
                for (int j=0; j<contor; j++)
                        a[j][i] = n%10;
                n = n/10;
        }

        for (int i=0; i<contor; i++) // afisarea matricei
        {
                for (int j=0; j<contor; j++)
                        cout << a[i][j];
                cout << endl;
        }

        return 0;
}
