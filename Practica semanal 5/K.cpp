#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string s;

    bool p = true;
    

    for(int i =0; i < s.size / 2; i++) {
        if(p[i] != p[s.size()-i-1]) {
            p = false
        }
    }
    if(p == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}   



