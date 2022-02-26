#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while(cin >> n) {
        int a1, a2, a3;
        int s1, s2, s3; // s1 = a1 + a2, s2 = a2 + a3, s3 = a1 + a3

        cout << "? 1 2" << endl;
        cin >> s1;

        cout << "? 2 3" << endl;
        cin >> s2;

        cout << "? 1 3" << endl;
        cin >> s3;

        // primero calculamos a1 siguiendo las siguientes ecuaciones:
        // s3 = a1 + a3 => a3 = s3 - a1
        // => s2 = a2 + a3 = a2 + s3 - a1 => a2 = s2 - s3 + a1
        // => s1 = a1 + a2 = a1 + s2 - s3 + a1 = 2 * a1 + s2 - s3
        // => a1 = (s1 - s2 + s3) / 2
        a1 = (s1 - s2 + s3) / 2;

        // ahora ya podemos calcular tanto a2 como a3
        // gracias a que:
        //   s1 = a1 + a2 => a2 = s1 - a1
        // y s3 = a1 + a3 => a3 = s3 - a1
        a2 = s1 - a1;
        a3 = s3 - a1;

        vector<int> a(n + 1); // importante el +1
        a[1] = a1;
        a[2] = a2;
        a[3] = a3;

        // con esto ya podemos calcular el resto de números
        // los primeros 3 ya los sabemos
        for(int i = 4; i <= n; i++) {
            cout << "? 1 " << i << endl;
            int s;
            cin >> s;
            a[i] = s - a[1];
        }

        cout << "!"; // esto indica que ahora daremos la respuesta

        // no empezamos el for loop desde 0
        for(int i = 1; i <= n; i++) {
            cout << " " << a[i];
        }
        cout << endl;
    }

    return 0;
}