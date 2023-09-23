#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    for (int x = -10; x <= 10; x++)
    {
        cout << sqrt(a*x*x+b*x+c)<<"\n";
    }
    return 0;
}