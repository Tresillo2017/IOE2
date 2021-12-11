---
layout: post
author: Tomas Palma
---

Problema
> - Bob juega a su juego de ordenador favorito. Él quiere mejorar su espada mágica. Para hacerlo, él necesita a cristales pequeños y b cristales grandes.

> - Bob actualmente no tiene ningún cristal, pero puede comprarlos de un mercader. El precio de un cristal pequeño es 3 monedas y el precio de un cristal grande es 5 monedas.

> - ¿Cuántas monedas necesita Bob para mejorar su espada?

>Input
    > - La primera línea contiene un entero positivo a (1≤a≤1000) — el número de cristales pequeños que Bob necesita para mejorar su espada.
    > - La segunda línea contiene un entero positivo b (1≤b≤1000) — el número de cristales grandes que Bob necesita para mejorar su espada.

> Output
    > Imprime un número entero — el número de monedas que Bob necesita para comprar a cristales pequeños y b cristales grandes.

Codigo

```cpp
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << 3*a+5*b;
	
}
```


# Problema 2

Problema
> Recibes dos enteros x y y. Estos números son las coordenadas de un punto en el plano XY.

> Imprime el número del cuadrante que contiene el punto dado: 1, 2, 3, o 4.
    
    1= (x > 0, y > 0)
    
    2= (x < 0, y < 0)
    
    3= (x < 0, y < 0)
    
    4= (x > 0, y < 0)

- Input
> La primera línea contiene un entero x, la segunda línea contiene un entero y (−1000≤x,y≤1000,x≠0,y≠0).

- Output
> Imprime un número entero — el número del cuadrante que contiene el punto con las coordenadas dadas..


Codigo
```cpp
#include <iostream>

int main()
{
    int x, y;
    std::cin >> x;
    std::cin >> y;
    if (x > 0) 
    {
        if (y > 0) std::cout << 1;
        else std::cout << 4;
    }
    else 
    {
        if (y > 0) std::cout << 2;
        else std::cout << 3;
    }
}
```

# Problema 3

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