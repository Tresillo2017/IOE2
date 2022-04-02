#include <iostream>
using namespace std;
#include <set>
int main()
{
    int n;
    int q;
    cin >> n >> q;
    set<long long int> a;
    for (int i = 0; i < n; i++)
    {
        long long int l;
        cin >> l;
        a.insert(l);
    }

    for (int i = 0; i < q; i++)
    {
        long long int valor;
        cin >> valor;
        if (a.count(valor) > 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}