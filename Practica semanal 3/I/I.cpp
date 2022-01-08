#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a < b)
    {
        int z = a;
        a = b;
        b = z;
    }
    if(c < d)
    {
        int z = c;
        c = d;
        d = z;
    }
    if(a > c || b > d)
    {
        cout << "NO" << endl;
    }
    else 
    {
        cout << "YES" << endl;
    }
}