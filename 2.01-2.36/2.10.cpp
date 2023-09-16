#include <iostream>

using namespace std;

int main()
{
    int n;
    int m = 1;
    cout << "Podaj parametr N: \n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m=m*i;
    }
    
    cout << m <<"\n";
    return 0;
}