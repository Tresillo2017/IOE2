---
layout: post
author: Tomas Palma
---

# Ejercicio A

> Recibes dos enteros a y b.

> Imprime el máximo de ellos.

- Input
> La primera línea contiene un entero a y la segunda línea contiene un entero b (−1000≤a,b≤1000).

- Output
> Imprime el mayor número de a y b.

- Codigo 

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << a << endl;
    } 
    // Sino si 
    else if (b > a) 
    {
        cout << b << endl;
    }
    else // a = b
    {
        cout << a << endl;
    }
}
```


# Ejercicio G

> Llamemos a un entero positivo afortunado si es divisible por 7 y no es divisible por 11.

> Recibes un entero n. Determina si es un número afortunado.

- Input
> La única línea de la entrada contiene un entero positivo n (1≤n≤1000).

- Output
> Imprime "YES" si el número dado es afortunado e imprime "NO" en otro caso.

- Codigo 

```cpp
#include <iostream>
using namespace std;
 
int main()
{
    int n; 
    cin >> n;
 
    if (n % 7 == 0 && n % 11 != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
```