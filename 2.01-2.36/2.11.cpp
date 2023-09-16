#include <iostream>

using namespace std;

int main()
{
    int n;
    int s = 0;
    cout << "Podaj parametr N: \n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s+=i;
    }
    
    cout << s <<"\n";
    return 0;
}