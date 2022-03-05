#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
long long int frecuencia(vector<long long int> a)
{
    vector<long long int> num(a.size());
    vector<long long int> frec(a.size());
    sort(a.begin(), a.end());
    num[0] = a[0];
    frec[0] = 1;
    int pos = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i - 1])
        {
            frec[pos]++;
        }
        else
        {
            pos++;
            num[pos] = a[i];
            frec[pos] = 1;
        }
    }
    int maximo = 0;
    int pos_maximo = 0;
    for (int i = 0; i <= pos; i++)
    {
        if (frec[i] > maximo)
        {
            maximo = frec[i];
            pos_maximo = i;
        }
    }
    return num[pos_maximo];
}

int main()
{
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin >> n;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int resultado = frecuencia(a);
        cout << resultado << endl;
    }
}