#include <iostream>

using namespace std;
int main()
{
    int p,q;
    cout << "Podaj przedzial od P do Q: \n";
    cin >> p >> q;
    for (int x = p; x <= q; x++)
    {
        cout << 1.5*x*x-2.2*x+0.4<<"\n";
    }
    return 0;
}