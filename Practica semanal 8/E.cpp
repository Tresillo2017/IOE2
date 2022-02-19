#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n, m, contador = 0;
    cin >> n;
    
    set<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int elemento;
        cin >> elemento;
        a.insert(elemento);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int elemento;
        cin >> elemento;
        b.insert(elemento);
    }
    bool encontrado = false;
    
    for (auto it = a.begin(); it != a.end(); it++)
    {
        if (b.count(*it) == 1)
        {
            contador++;
        }
    }
    cout << (n+m) - 2*contador << " ";
}    