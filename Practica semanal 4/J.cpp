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
        if (m > 100)
            suma = suma + 100;
        else
            suma = suma + m;
    }
    cout << suma << endl;
}   



