#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = n; i * i; i <= n)
    {
        cout << i << endl;
    }
}   