#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Podaj parametr N: \n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << pow(2,i)<<"\n";
    }
    
    
    return 0;
}