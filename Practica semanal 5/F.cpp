#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s; 

    bool no = false;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1' && s[i + 1] == '1') {
            no = true;
        }
    }

    if(no == false) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}



