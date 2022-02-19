#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n, m;
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
            encontrado = true;
            break;
        }
    }
    if (encontrado)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}    