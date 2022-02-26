#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;

    map<string, int> m;

    for(int i = 0; i < n; i++) {
        string palabra;
        cin >> palabra;
    if(m.count(palabra) == 0) {
        m[palabra] = 1;
    }
    else {
        m[palabra]++;
    }
    }
    int frecuencia_maxima = 0;
    string palabra_con_frecuencia_maxima;

    for(auto [palabra, frecuencia] : m) {
        if(frecuencia > frecuencia_maxima) {
            frecuencia_maxima = frecuencia;
            palabra_con_frecuencia_maxima = palabra;
        }
    }

    cout << palabra_con_frecuencia_maxima << endl;
}