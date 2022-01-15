#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int suma = 1;
    
    for(int i = 2; i <= m; i++)
    {
        if (m % i == 0)
            suma++;
    }
    cout << suma << endl;
}   



