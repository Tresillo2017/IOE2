#include <iostream>
using namespace std;

int main()
{
    int i, n, m;
    cin >> n;
    int l = 0;
    
    for(int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            l = l + 2;
        else
            l = l + 1;
    }
    cout << l << endl;
}   



