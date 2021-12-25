#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(a == 1 && b == 1)
        cout << "DRAW" << endl;
    if(a == 2 && b == 2)
        cout << "DRAW" << endl;
    if(a == 3 && b == 3)
        cout << "DRAW" << endl;
    else
    {
        if(a == 1 && b == 3)
            cout << "FIRST" << endl;
        if(a == 2 && b == 1)
            cout << "FIRST" << endl;
        else 
        {    
            if(a == 1 && b == 2)
                cout << "SECOND" << endl;
            if(a == 3 && b == 1)
                cout << "SECOND" << endl;
            if(a == 2 && b == 3)
                cout << "SECOND" << endl;
        }
    }
}