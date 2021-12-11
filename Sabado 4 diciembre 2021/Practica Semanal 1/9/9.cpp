#include <iostream>
using namespace std;

int main()
{
    int suma = 0, n;
    cin >> n;
    for( int i = 1; i <= n; i+= 2 )
    {
        if( i % 2 != 0 ) suma += i;
    }

    cout << suma << endl;

}
