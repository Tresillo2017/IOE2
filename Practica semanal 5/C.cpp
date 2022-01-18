#include <iostream>
#include <string>
using namespace std;

int main()
{
    int contador = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'f')
            contador++;
    }
    
    cout << contador << endl;
}   



