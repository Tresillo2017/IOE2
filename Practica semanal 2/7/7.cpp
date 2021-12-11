#include <iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    if (n % 7 == 0 && n % 11 != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}