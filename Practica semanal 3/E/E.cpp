#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if((n / 10) == (n % 10))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}