#include <iostream>
using namespace std;

int main()
{
	int h;
    // Abierto de 5pm a 7pm
    cin >> h;
    if (h >= 5 && h <= 9)
        cout << "OPEN";
    else 
        cout << "CLOSED"; 
    // cout << ((h >= 5 && h <= 9)? "OPEN": "CLOSED");
}

