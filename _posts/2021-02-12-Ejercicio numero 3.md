---
layout: post
author: Tomas Palma
---

Problema
> *x<sub>n</sub>* equipos se han registrado para la competición de programación. Hay *ax<sub>i</sub>* miembros en el *x<sub>i</sub>*-ésimo equipo registrado. Un equipo puede competir si tiene al menos *x* participantes y no más de *y* participantes.

> Encuentra el número de equipos que pueden competir.

- Input
    
    > La primera línea contiene un entero positivo n *(1≤n≤100)* — el número de equipos registrados.

    > La segunda línea contiene un entero x *(0≤x≤10)* — el mínimo número de participantes en un equipo.

    > La tercera línea contiene un entero y *(x≤y≤10)* — el máximo número de participantes en un equipo.

> Entonces siguen n líneas. La i-ésima contiene un entero ai *(1≤ax<sub>i</sub>≤10)* — el número de participantes en el *x<sub>i</sub>*-éisimo equipo.

- Output
    > Imprime un entero — el número de equipos que tienen permitido competir.


Codigo
```cpp
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
```