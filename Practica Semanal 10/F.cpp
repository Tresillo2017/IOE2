#include <iostream>
using namespace std;
#include <map>

int main()
{
	map<string, int> catalogo;
	map<string, int> precio;
	string op;
	string articulo;
	int cantidad;
	int income = 0;
	cin >> op;
	while (op != "exit")
	{
		if (op == "assortment")
		{
			int count = 0;
			for (auto [clave, valor] : catalogo)
			{
				if (valor > 0)
				{
					count++;
				}
			}
			cout << count << endl;
		}
		else if (op == "add")
		{
			cin >> articulo;
			cin >> cantidad;
			if (catalogo.count(articulo) == 0)
			{
				catalogo[articulo] = cantidad;
				precio[articulo] = 1;
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
				income += (cantidad * precio[articulo]);
				if (catalogo[articulo] <= 0)
				{
				}
			}
		}
		else if (op == "income")
		{
			cout << income << endl;
		}
		else if (op == "changeprice")
		{
			cin >> articulo;
			cin >> cantidad;
			precio[articulo] = cantidad;
		}
		else
		{
			cin >> articulo;
			cout << precio[articulo] << endl;
			;
		}
		cin >> op;
	}
}