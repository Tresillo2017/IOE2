#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
 
int main()
{
    long long int n;
    cin >> n;
    long long int suma = 0;
    vector<long long int> a(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (long long int i = 0; i < n; i++)
    {
        if (a[i]- a[0] != i)
        {
            suma= suma + (a[i] - a[0]) - 1;
        }
    }
    cout << suma;
}