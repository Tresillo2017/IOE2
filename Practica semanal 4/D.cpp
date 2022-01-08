#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int suma = 0;

    for(int i = 1; i <= n - 1; i++)
    {
        suma += i * (i + 1);
    }
    cout << suma << endl;
}