#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    map<long long int, long long int> rango;

    for(int i = 0; i < n; i++) {
        long long int numero;
        cin >> numero;
    if(rango.count(numero) == 0) {
        rango[numero] = 1;
    }
    else {
        rango[numero]++;
    }
    }
    long long int rango_maxima = 0;
    long long int clave_maxima;

    for(auto [numero, frecuencia] : rango) {
        long long int valor_rango = frecuencia * numero;
        if(valor_rango > rango_maxima) {
            rango_maxima = valor_rango;
            clave_maxima = numero;
        } else if(valor_rango == rango_maxima && numero < clave_maxima){
            clave_maxima = numero;
        }
    }

    cout << clave_maxima << endl;
}
