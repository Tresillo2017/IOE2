#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << a << endl;
    } 
    // Sino si 
    else if (b > a) 
    {
        cout << b << endl;
    }
    else // a = b
    {
        cout << a << endl;
    }
}