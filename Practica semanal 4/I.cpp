#include <iostream>
using namespace std;

int main()
{
    int i, n, m;
    cin >> n;
    int max = 0;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> m;
        if (m > max)
            max = m;
    }
    cout << max << endl;
}   



