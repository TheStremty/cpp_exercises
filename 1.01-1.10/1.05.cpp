#include <iostream>

using namespace std;

int main()
{
    int a,b,h;
    cout << "Podaj podstawy A, B oraz wysokosc H: \n";
    cin >> a;
    cin >> b;
    cin >> h;
    cout << 0.5*(a+b)*h;
    return 0;
}