#include <iostream>
using namespace std;

int main()
{
    int n, b, c;
    cout << "Numero de manzanas (3 monedas cada una)";
        cin >> n;
    cout << "Numero de bananas (5 monedas cada una)";
        cin >> b;
    cout << "Numero de melocotones (7 monedas cada uno)";
        cin >> c;
    cout << (n*3+b*5+c*7);
}

