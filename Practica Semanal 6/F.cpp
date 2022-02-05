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
    int x, y;
    cin >> x >> y;
    for(int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            a[i] = y;
        }
        cout << a[i] << " ";
    }
}   
