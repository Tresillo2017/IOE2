#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a + b >= a + c && a + b >= b + c)
    {
        cout << a + b << endl;
    }
    else if(a + c >= a + b && a + c >= b + c )
    {
        cout << a + c << endl;
    }
    else 
    {
        cout << b + c << endl;
    }

}