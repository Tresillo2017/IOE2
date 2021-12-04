#include <iostream>
// La letra "U" significa que Tony se mueve hacia arriba: de (x,y) a (x,y+1).
// La letra "R" significa que Tony se mueve hacia la derecha : de(x, y) a(x + 1, y).
// La letra "D" significa que Tony se mueve hacia abajo : de(x, y) a(x, y−1).
// La letra "L" significa que Tony se mueve hacia la izquierda : de(x, y) a(x−1, y).
using namespace std;
int main()
{
	int movimiento;
	int x, y = 0;
    cin >> movimiento;
	if (movimiento = U)
	{
		cin >> x + 1;
	}	
	if (movimiento = R)
	{
		cin >> x+1
	}
	if (movimiento = D)
	{
		cin >> y-1
	}
	if (movimiento = L)
	{
		cin >> x-1
	}
	cout << x;
	cout << y;
}
