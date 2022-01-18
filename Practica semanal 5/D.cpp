#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string s;

    cin >> s; 
    cin >> i;

    int alice = 0; 
    int bob = 0; 

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A') {
            alice += 1; 
        }
        else {
            bob += 1;
        } 
    }
    if (alice > bob) {
        cout << "ALICE " << endl;
    } else if (bob > alice) {
        cout << "BOB" << endl;
    } else {
        cout << "DRAW" << endl;
    } 
}   



