#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n % 10 == 0)
        cout << "SUPER" << endl;
    else if(n % 10 == 5)
        cout << "GOOD" << endl;
    else 
        cout << "OK" << endl;
}