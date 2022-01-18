#include <iostream>
#include <string>
using namespace std;

int main()
{
    int contador = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length()-1; i++)
    {
        cout << s[i] << "_";
    }
    
    cout << s[s.length()-1] << endl;
}   



