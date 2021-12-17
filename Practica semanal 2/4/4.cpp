#include <iostream>
using namespace std;

int main()
{
	int n, m, k;
    // N = largo 
    // M = ancho 
    // K = n~ baldosas
    cin >> n >> m >> k;
    if ((n * m) <= k)
        cout << "YES";
    else
        cout << "NO";

}

