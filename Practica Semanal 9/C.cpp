#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    map<string, string> ciudades;

    
    for(int i = 0; i < n; i++){
        string ciudad, pais;
        cin >> ciudad >> pais;
        ciudades[ciudad] = pais;
    }
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string ciudad;
        cin >> ciudad;
        if(ciudades.count(ciudad) == 0){
            cout << ":(" << endl;
        }else{
            cout << ciudades[ciudad] << endl;
        }
    }
}