#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector <int> count(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[i] = 0;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; a[j] <= a[i]; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                count[i]++;
            }
        }
    }
    int maximo = 0;
    for (int i = 0; i < n; i++)
    {
        if (count[i] > maximo)
        {
            maximo = count[i];
        }
    }
    cout << maximo + 1;
}