#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, maximo = 0;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if (a[i] * a[j] > maximo)
            {
                maximo = a[i] * a[j];
            }
        }
    }
    cout << maximo << endl;
}   
