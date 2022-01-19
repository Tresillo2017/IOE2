#include <iostream>
#include <string>
using namespace std;

int main()
{
    int na = 0, nb = 0;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) 
    {
        if(s[i] == 'a') 
            na++;
        else
            nb++;
    }
    if (s.size() % 2 == 0)
    {
        if(na % 2 == 0 && nb % 2 == 0) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    else if ((na % 2 == 0 && nb % 2 == 1) || (na % 2 == 1 && nb % 2 == 0))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    
}   



