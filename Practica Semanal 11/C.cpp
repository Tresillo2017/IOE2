#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <set>
#include <algorithm>
int main()
{
    int n;
    int q;
    cin >> n >> q;
    set<long long int> elementos;
    map<long long int, int> primero, segundo;
    for (int i = 0; i < n; i++)
    {
        long long int l;
        cin >> l;

        if (elementos.count(l) == 1)
        {
            segundo[l] = i + 1;
        }
        else
        {
            primero[l] = i + 1;
            segundo[l] = i + 1;
        }
        elementos.insert(l);
    }
    for (int i = 0; i < q; i++)
    {
        long long int valor;
        cin >> valor;
        if (elementos.count(valor) == 1)
        {
            cout << primero[valor] << " " << segundo[valor] << endl;
        }
        else
            cout << "-1 -1" << endl;
    }
}