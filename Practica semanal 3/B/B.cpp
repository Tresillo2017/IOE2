#include <iostream>
using namespace std;

int main()
{
    int puntaje;
    cin >> puntaje;

    if(puntaje > 0 && puntaje < 40 )
        cout << "Emerging" << endl;
    else if(puntaje > 41 && puntaje < 80)
        cout << "Developing" << endl;
    else 
        cout << "Achieved" << endl;
}