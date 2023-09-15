#include <iostream>

using namespace std;

const double pi = 3.1415;

int main()
{
    int r;
    cout << "Podaj promień kuli: \n";
    cin >> r;
    cout << 4*pi*r*r;
    return 0;
}