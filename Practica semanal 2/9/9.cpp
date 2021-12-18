#include <iostream>
using namespace std;

int main()
{
    int n, m , k;
    cin >> n >> m >> k ;
    if (k >= n * m)
        cout << "NO";
    else if (k >= n && k % n == 0)
        cout << "YES";
    else if (k >= m && k % m == 0)
        cout << "YES";
    else 
        cout << "NO";
}