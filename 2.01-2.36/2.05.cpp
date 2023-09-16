#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cout << "Podaj argumenty A i B: \n";
    cin >> a >> b;
    for (float x = 1.0; x <= 10.0; x+=0.5)
    {
        cout << a*x*x*x-b*x<<"\n";
    }
    return 0;
}