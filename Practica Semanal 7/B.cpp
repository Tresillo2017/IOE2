#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int res = 2000000000;

    for(int i = 1; i < n; i++)
        if(abs(a[i] - a[i - 1] < res))
        {
            res = abs(a[i] - a[i - 1]);
        }
    cout << res << endl;
}