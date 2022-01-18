// Piedra = 1
// Papel = 2
// Tijeras = 3

#include <iostream>
using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;

    if(a == b)
        cout << "DRAW" << endl;
    else
    {
        if(a == 1)
            if (b == 3)
            {
                cout << "FIRST" << endl;
            } else
                cout << "SECOND" << endl;

        else if(a == 2)
                if(b == 1)
                    cout << "FIRST" << endl;
                else
                    cout << "SECOND" << endl;
        else if(b == 2)
            cout << "FIRST" << endl;
        else 
            cout << "SECOND" << endl;
    }
}