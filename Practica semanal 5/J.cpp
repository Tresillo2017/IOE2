#include <iostream>
#include <string>
using namespace std;

int main()
{
    int contador = 0;
    string s, test = "";
    cin >> s;

    for (int i = s.size()/2; i < s.size(); i++)
    {
        test += s[i];
        // cout << test << endl;
    }

    for (int i = 0; i < s.size()/2; i++)
    {
            test += s[i];
            // cout << test << endl;
    }
    cout << test << endl;
}   



