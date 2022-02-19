#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int elemento;
        cin >> elemento;
        a.insert(elemento);
    }
    cout << a.size();
}