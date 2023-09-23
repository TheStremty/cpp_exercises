#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a%10 == 0 && a > 100)
        cout << "Tak";
    else
        cout << "Nie";
    return 0;
}