#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    int suma = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            suma+= i*j;
        }
    }
    cout << suma;
 
}