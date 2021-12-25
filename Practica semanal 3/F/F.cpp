#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(a > b)
        cout << "FIRST" << endl;
    else if(a < b)
        cout << "SECOND" << endl;
    else if(a == b)
        cout << "DRAW" << endl;
}