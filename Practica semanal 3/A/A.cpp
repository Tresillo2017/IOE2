#include <iostream>
using namespace std;

int main()
{
    int h;
    cin >> h;

    if(h < 12)
        cout << "GOOD MORNING" << endl;
    else if(h >= 12 && h < 17)
        cout << "GOOD AFTERNOON" << endl;
    else 
        cout << "GOOD EVENING" << endl;
}