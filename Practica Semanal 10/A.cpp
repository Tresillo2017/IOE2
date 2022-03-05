#include <iostream>
using namespace std;

bool primo(int n)
{
    for (int k = 2; k <= n - 1; k++)
    {
        if (n % k == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    for (int tt = 1; tt <= t; tt++)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (primo(n) == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}