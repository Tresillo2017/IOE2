#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    
    vector<int> a(n);
    set<int> b;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.insert(x);
    }
    
    set<int> c;
    
    for (int i = 0; i < n; i++)
    {
        if (b.count(a[i]) == 1)
        {
            c.insert(a[i]);
        }
        
    }
    
    for (auto it = c.begin(); it != c.end(); it++)
    {
        cout << *it << " ";
    }
    
}