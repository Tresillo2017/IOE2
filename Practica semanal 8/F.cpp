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
    set<int> b;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    b.insert(a[0]);
    
    cout << "NO" << endl;
    for (int i = 1; i < n; i++)
    {
        if (b.count(a[i]) == 1)
        {
            cout << "YES" << endl;
        } else 
        {
            cout << "NO" << endl;
        }
        b.insert(a[i]);
    }
}