#include <iostream>
// La letra "U" significa que Tony se mueve hacia arriba: de (x,y) a (x,y+1).
// La letra "R" significa que Tony se mueve hacia la derecha : de(x, y) a(x + 1, y).
// La letra "D" significa que Tony se mueve hacia abajo : de(x, y) a(x, y−1).
// La letra "L" significa que Tony se mueve hacia la izquierda : de(x, y) a(x−1, y).
using namespace std;
int main()
{
	string movimiento;
	int x = 0, y = 0;
    cin >> movimiento;
	for (int i = 0; i < movimiento.length(); i++)
	{
		if (movimiento[i] == 'U')
		{
			y++;
		}	
		else if (movimiento[i] == 'R')
		{
			x++;
		}
		else if (movimiento[i] == 'D')
		{
			y--;
		}
		else if (movimiento[i] == 'L')
		{
			x--;
		}
	}
	cout << x << endl << y;
}
