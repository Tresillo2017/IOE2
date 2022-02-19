#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    bool anagrama = true;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] !=  b[i]){
            anagrama = false;
            break;
        }
    }
    if (anagrama)
    {
        cout << "YES";
    } 
    else
    {
        cout << "NO";
    } 
}