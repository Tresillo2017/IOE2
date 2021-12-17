#include <iostream>
using namespace std;

int main()
{
	int numero, resultado;
	cin >> numero;
	numero = numero % 2;
//	cout << numero;
	if (numero <= 0) 
	{
		cout << "EVEN";
	}
    else //(numero = 1)
	{
		cout << "ODD"; 
	}
}
