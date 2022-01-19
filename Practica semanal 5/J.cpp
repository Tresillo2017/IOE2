#include <iostream>
#include <string>
using namespace std;

int main()
{
    int contador = 0;
    string s;
    char test[100];
    char primera[50], segunda[50];
    cin >> s;



    int j = 0;
    for (int i = s.size()/2; i < s.size(); i++)
    {
        test[j] = s[i];
        // cout << test[j];
        j++;
    }

    for (int i = 0; i < s.size()/2; i++)
    {
            // cout << j;
            test[j] = s[i];
            j++;
            cout << test[j] << endl;
    }

    // cout << primera << endl;
    /* for (int i = 0; i < s.size()/2; i++)
    {
            primera[i] = s[i];
            cout << primera[i] << endl;
    }
    int j = 0;

    for (int i = s.size()/2; i < s.size(); i++)
    {
        segunda[j] = s[i];
        cout << segunda[j];
        j++;
    }
    */
    // cout << segunda;
    // cout << primera << endl;
}   



