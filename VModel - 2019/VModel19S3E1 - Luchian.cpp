#include <iostream>

using namespace std;

unsigned int CifrePrime(unsigned int n)
{
    unsigned int s=0;
    while (n > 0)
    {
        if (n%10 == 2 || n%10 == 3 || n%10 == 5 || n%10 == 7)
            s += n%10;
        n = n/10;
    }
    return s;
}

int main()
{
    cout << CifrePrime(140);
}
