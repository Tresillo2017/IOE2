#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    vector<long long int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[0]*a[1];
}