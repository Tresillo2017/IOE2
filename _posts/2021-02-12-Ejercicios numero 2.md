---
layout: post
author: Tomas Palma
---

Problema
> Recibes dos enteros x y y. Estos números son las coordenadas de un punto en el plano XY.

> Imprime el número del cuadrante que contiene el punto dado: 1, 2, 3, o 4.
    > - 1= (x > 0, y > 0)
    > - 2= (x < 0, y < 0)
    > - 3= (x < 0, y < 0)
    > - 4= (x > 0, y < 0)

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