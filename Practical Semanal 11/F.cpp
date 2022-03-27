#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long int

// es suficiente esta v?
bool suficiente(int n, ll v) {
    ll ecuaciones_resueltas = 0;

    for(ll dia = 1; dia <= v; dia++) {
        ecuaciones_resueltas += v / dia;
    }

    return ecuaciones_resueltas >= n;
}

int main() {
    int n;
    cin >> n;

    int low = 1;
    int high = n;
    while(low < high) {
        int v = (low + high) / 2;

        if(suficiente(n, v) == true) {
            high = v;
        } else {
            low = v + 1;
        }
    }

    cout << low << endl;
}