#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int total=0;
    cout << "Podaj parametr N: \n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        total += total + pow(-2,n);
        cout << total <<"\n";
    }
    
    return 0;
}