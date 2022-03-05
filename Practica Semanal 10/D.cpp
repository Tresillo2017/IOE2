#include <iostream>
using namespace std;
#include <map>

int main()
{
    map<string, int> catalogo;
    string op;
    string articulo;
    int cantidad;
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
        else
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
                if (catalogo[articulo] <= 0)
                {
                    catalogo.erase(articulo);
                }
            }
        }
        cin >> op;
    }
}