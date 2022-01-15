#include <iostream>
using namespace std;

int main()
{
    int i, n, m;
    cin >> n;
    int suma = 0;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> m;
        if (m == 0)
            suma++;
    }
    cout << suma << endl;
}   



