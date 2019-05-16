#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    ifstream f("nr.txt");
    f >> n;
    cout << n << " ";
    while(n!=1)
    {
        cout << n/10 << " ";
        n /= 10;
    }
    return 0;
}
