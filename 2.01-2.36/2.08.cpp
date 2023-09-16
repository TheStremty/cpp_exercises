#include <iostream>

using namespace std;

int main()
{
    int n;
    int total=0;
    cout << "Podaj parametr N: \n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        total += total + (i/(2*i-1));
        cout << total <<"\n";
    }
    
    return 0;
}