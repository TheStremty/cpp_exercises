#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a%2 == 0 && a%3 == 0)
        cout << "Tak";
    else
        cout << "Nie";
    return 0;
}