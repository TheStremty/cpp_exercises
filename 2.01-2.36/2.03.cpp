#include <iostream>

using namespace std;
int main()
{
    int p,q;
    cout << "Podaj przedzial od P do Q: \n";
    cin >> p >> q;
    for (int x = p; x <= q; x++)
    {
        cout << 2.5*x*x*x-4.8*x*x+1.1<<"\n";
    }
    return 0;
}