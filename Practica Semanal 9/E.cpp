#include <map>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    map <string, int> bio;
     for(int i = 0; i < n; i++) {
        string animal;
        cin >> animal;
        if (bio.count(animal) == 0){
           bio[animal] = 1;
        } else bio[animal]++;
     }
    
    int maximo = 0;
    string clavemaxima;
    for(auto [clave, valor] : bio) {
    if(bio[clave] > maximo) {
        maximo = bio[clave];
        clavemaxima = clave;
    }
    }
    
    if (maximo > (n/2)){
        cout << clavemaxima;
    } else cout << "NONE";
}