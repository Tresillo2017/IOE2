#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    char a[n][n];
    memset(&a[0][0],'.' ,sizeof(a));
    a[x - 1][y - 1] = '#';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        cout << a[i][j];
    }
        cout << endl;
    }
}