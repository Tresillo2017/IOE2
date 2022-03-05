#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

vector<long long int> a(3);
long long int mediana(vector<long long int> a)
{
    sort(a.begin(), a.end());
    return a[1];
}

int main()
{
    int t;
    cin >> t;
    vector<long long int> b(t);
    for (int tt = 0; tt < t; tt++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        b[tt] = mediana(a);
    }
    for (int i = 0; i < t; i++)
    {
        cout << b[i] << endl;
    }
}
