#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for(int tt = 1; tt <= t; tt++){
        int n;
        cin >> n;
    
    vector<int> a(n);
    vector<int> copia_a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        copia_a[i] = a[i];
    }
    
    sort(a.begin(), a.end());
    
    int sus;
    if(a[0] != a[1]){
        sus = a[0];
    } else {
        sus = a[n - 1];
    }
    
    for(int i = 0; i < n; i++){
        if(copia_a[i] == sus){
            cout << i + 1 << endl;
            break;
            
        }
    }
    }
    
}