#include <iostream>
using namespace std;
#include <map>

int main()
{
    map<string, int> catalogo;
    string op;
    string articulo;
    int cantidad;
    int income = 0;
    cin >> op;
    while (op != "exit")
    {
        if (op == "assortment")
        {
            cout << catalogo.size() << endl;
        }
        else if (op == "add")
        {
            cin >> articulo;
            cin >> cantidad;
            if (catalogo.count(articulo) == 0)
            {
                catalogo[articulo] = cantidad;
            }
            else
                catalogo[articulo] += cantidad;
        }
        else if (op == "sell")
        {
            cin >> articulo;
            cin >> cantidad;
            if (catalogo.count(articulo) == 0)
            {
                break;
            }
            else
            {
                catalogo[articulo] -= cantidad;
                income += cantidad;
                if (catalogo[articulo] <= 0)
                {
                    catalogo.erase(articulo);
                }
            }
        }
        else
            cout << income << endl;
        cin >> op;
    }
}