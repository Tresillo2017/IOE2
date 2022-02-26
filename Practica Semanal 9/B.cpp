#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string cadena;
    cin >> cadena;

    int n;
    cin >> n;

    map<char, char> codigo;

    for(int i = 0; i < n; i++) {
        char c1, c2;
        cin >> c1 >> c2;
        codigo[c1] = c2;
    }
    for(int i = 0; i < cadena.size(); i++){
        char c = cadena[i];
        if(codigo.count(c) == 0){
            cout << c;
        }else {
            cout << codigo[c];
        }
    }

}