#include <iostream>
using namespace std;
int main()
{
    int n_equipos, m_min, m_max;
    int contador = 0;
    cin >> n_equipos;
    cin >> m_min;
    cin >> m_max;
    for (int i = 0; i < n_equipos; i++)
    {
        int n_jugadores;
        cin >> n_jugadores;
        if (n_jugadores >= m_min && n_jugadores <= m_max)
        {
            contador++;
        }
    }
    cout << contador;
}
