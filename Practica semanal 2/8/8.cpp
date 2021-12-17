#include <iostream>
using namespace std;

int main()
{
    int x, y, n, hor, ver;
    cin >> n >> x >> y;
    if (x == n || x == 1)
        hor = 1;
    else
        hor = 2; 
    if (y == n || y == 1)
        ver = 1;
    else 
        ver = 2;
    cout << (hor + ver);
}

