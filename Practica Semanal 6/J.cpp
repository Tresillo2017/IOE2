#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, maximo1 = 0, maximo2 = 0, max = 0;
    cin >> n;

    vector<long long int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if (a[i] > maximo1)
        {
            maximo1 = a[i]
            max = i;
        }
    }
    
    cout << maximo << endl;
}   
