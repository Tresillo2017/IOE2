#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, contador = 0;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int x, y;
    bool found = false;
    // cin >> x >> y;
    for(int i = 0; i < n-1; i++)
    {
        if (a[i] * a[i+1] > 0)
        {
            cout << "YES";
            found = true;
            break;
        }
    }
    if (!found)
        {
            cout << "NO" << endl;
        }
}   
