#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    long long int c;
    cin >> c;
    for (int i = 0; i < 2 * 10e5; i++)
    {
        if (42 * pow(i, 3) + 13 * pow(i, 2) + 1337 * i == c)
        {
            cout << i;
            break;
        }
    }
}