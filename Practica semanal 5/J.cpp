#include <iostream>
#include <string>
using namespace std;

int main()
{
    int contador = 0;
    string s, primera, segunda;
    cin >> s;
    for (int i = 0; i < s.length()/2-1; i++)
        primera[i] = s[i];

    int j = 0;

    for (int i = s.length()/2; i < s.length(); i++)
    {
        segunda[j] = s[i];
        j++;
        cout << segunda[j];
    }

    cout << segunda << endl;
}   



