#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Podaj argumenty A i B: \n";
    cin >> a;
    cin >> b;

    for (float x = 0.0; x < 1.01; x+=0.1)
    {
        cout << a*x*x+b<<"\n";
    }
    return 0;
    
}