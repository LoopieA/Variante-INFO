#include <iostream>

using namespace std;

int f(int n)
{
    int d=2, p;
    while(n>1)
    {
        p=0;//p este initializat cu 0, pentru ca de fiecare data cand se reia instructiunea while sa se poata determina puterea la care apare factorul prim
        //se verifica daca numarul n se imparte de mai multe ori la numarul d
        while(n%d==0)
        {
            p++; //se contorizeaza puterea la care apare factorul prim in descompunere
            n=n/d; //se imparte n la d pentru a se putea continua impartirea si identificarea puterii
        }
        //daca numarul d se imparte macar o data la n se afiseaza d, alaturi de puterea la care apare in descompunere
        //daca p este 0 inseamna ca numarul d nu se imparte deloc la n
        if(p>0)
            return d;
        d=d+1; //creste d, pentru a putea identifica si alti factori primi ai descompunerii
    }
}

int main()
{
    unsigned int n, v[100], k=0;
    cin >> n;
    for(int i = 0; i<n; i++)
        cin >> v[i];
    for(int i = 0; i<n; i++)
        if(f(v[i]) == v[i])
        {
            cout << v[i] << " ";
            k++;
        }
    if(k==0)
        cout << "NU EXISTA";
    return 0;
}
