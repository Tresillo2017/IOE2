#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
 
int main (){
    long long int n, m;
    cin >> n >> m;
    long long int suma = 0;
    long long int constante = m * (m + 1) /2;
    for (int i = 1; i <= n; i++)
    {
        suma+= constante*i;
    }
    cout << suma;
}