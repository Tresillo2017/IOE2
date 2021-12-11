---
layout: post
author: Tomas Palma
---

# Ejercicio A

> Escriba un programa que imprima un solo entero: 2021.

- Codigo 

```cpp
#include <iostream>
using namespace std;

int main()
{
	cout << 2021 << endl;
}
```

# Ejercicio B

> Recibes un entero n. Imprime n+1.

- Input
> Ła única línea contiene un entero n (−1000≤n≤1000).

- Output
> Imprime n+1.

- Codigo

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << (n + 1);
}
```

# Ejercicio C

> Recibes dos enteros a y b.

> Imprime a+b.

- Input
> La primera línea contiene un entero a y la segunda línea contiene un entero b (−1000≤a,b≤1000).

- Output
> Imprime a+b.

- Codigo

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n, b;
    cin >> n;
    cin >> b;
    cout << (n + b);
}
```


# Ejercicio D

> El supervisor trajo unas manzanas al campamento de programación y quiere distribuirlas entre los estudiantes. Recibes dos enteros positivos n ym, donde n es el número de manzanas y m es el número de estudiantes. El supervisor quiere distribuir manzanas equitativamente de manera que los estudiantes obtengan el mismo número de manzanas. Al mismo tiempo, él quiere que este número sea tan grande como sea posible. Tu tarea es calcular el número de manzanas que cada estudiante recibe después de esa distribución.

- Input
> La primera línea contiene un entero positivo n (1≤n≤1000) — el número de manzanas.

> La segunda línea contiene un entero positivo m (1≤m≤1000) — el número de estudiantes en el campamento.

- Output
> Imprime un entero — el número de manzanas que cada estudiante recibe después de una distribución equitativa de manzanas.

- Codigo 

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n, b;
    cin >> n;
    cin >> b;
    cout << (n / b);
}
```


# Ejercicio E

> El supervisor trajo unas manzanas al campamento de programación y quiere distribuirlas entre los estudiantes. Recibes dos enteros positivos n ym, donde n es el número de manzanas y m es el número de estudiantes. El supervisor quiere distribuir manzanas equitativamente de manera que los estudiantes obtengan el mismo número de manzanas. Al mismo tiempo, él quiere que este número sea tan grande como sea posible. Tu tarea es calcular el número de manzanas que quedarán después de esa distribución.

- Input
> La primera línea contiene un entero positivo n (1≤n≤1000) — el número de manzanas.

> La segunda línea contiene un entero positivo m (1≤m≤1000) — el número de estudiantes en el campamento.

- Output
> Imprime un entero — el número de manzanas que quedarán después de una distribución equitativa de manzanas.

- Codigo 

```cpp
#include <iostream>
using namespace std;
 
int main()
{
    int n, b;
    cin >> n;
    cin >> b;
    cout << (n % b);
}
```


# Ejercicio F 

> Alicia quiere hacer una ensalada de frutas. Para esto ella necesita a manzanas, b bananas y c melocotones.

> En la tienda, una manzana cuesta 3 monedas, una banana cuesta 5 monedas, y un melocotón cuesta 7 monedas.

> ¿Cuántas monedas ella necesita para comprar todos los productos necesarios para la ensalada.

- Input
> La primera línea contiene un entero a (1≤a≤1000) — el número de manzanas necesarias para la ensalada.

> La segunda línea contiene un entero b (1≤b≤1000) — el número de bananas necesarias para la ensalada.

> La tercera línea contiene un entero c (1≤c≤1000) — el número de melocotones necesarios para la ensalada.

- Output
> Imprime un entero — el número de monedas que Alicia necesita para comprar todos los productos necesarios para la ensalada.

- Codigo 

```cpp
#include <iostream>
using namespace std;
 
int main()
{
    int n, b, c;
        cin >> n;
        cin >> b;
        cin >> c;
    cout << (n*3+b*5+c*7);
}
```


# Ejercicio G

> Hay n estudiantes en la clase. La competencia por equipos comenzará pronto. El profesor quiere crear tantos equipos como sea posible tal que cada equipo tenga al menos 2 participantes.

> ¿Cuál es el máximo número de equipos que se pueden crear?

- Input
> La única línea contiene un entero positivo n (2≤n≤100) — el número de estudiantes en la clase.

- Output
> Imprime un entero — el máximo número de equipos que pueden ser creados a partir de los n estudiantes.

- Codigo 

```cpp
#include <iostream>
using namespace std;
 
int main()
{
    int n, b, c;
        cin >> n;
    cout << (n/2);
}
```

# Ejercicio H

> Las nuevas casas en el país Imaginationland tienen un sistema numérico especial para los apartamentos.

> Cada casa tiene 10 pisos y hay 10 departamentos en cada piso. Cada apartamento tiene un número de dos dígitos, el primer dígito es el número del piso y el segundo es el número del apartamento en este piso. Por ejemplo, el apartamento con número 34 está en el tercer piso y el apartamento con número 70 está en el séptimo piso. Tu tarea es escribir un programa que, dado el número del apartamento, imprima el número del piso.

- Input
> La única línea contiene un entero positivo n (10≤n≤99) — el número del apartamento.

- Output
> Imprime un entero positivo — el piso del apartamento con el número dado.

- Codigo 

```cpp
#include <iostream>
using namespace std;
 
int main()
{
    int n;
        cin >> n;
    cout << (n/10);
}
```


# Ejercicio I

> Recibes un entero no negativo m que es el número de minutos. Tu tarea es representar el número de minutos en el formato de un reloj digital: el número de horas y el número de minutos. Por ejemplo, 150 minutos se convierten en 2 horas y 30 minutos.

- Input
> La única línea contiene un entero no negativo m (0≤m<1440) — el número de minutos.

- Output
> En la primera línea imprime un entero — el número de horas en el número dado de minutos.

> En la segunda línea imprime un entero — el número de minutos restantes del número de minutos dados.

- Codigo 

```cpp
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    cout << n/60;
    cout << "\n";
    cout << n % 60;
}
```


# Ejercicio J

> En su libreta, Bob escribió todos los enteros de 1 a n. A Bob no le gustan los números pares, así que él decidió borrarlos todos (los números pares). Ahora él está interesado en la suma de los restantes números. Ayúdalo a calcular la suma.

> Por ejemplo, si n=8 los números restantes son 1, 3, 5, 7. Su suma es 16.

- Input
> La única línea de la entrada contiene un entero positivo n (1≤n≤1000).

- Output
> Imprime un entero — la suma de los números restantes luego de que Bob borre todos los números pares.

- Codigo 

```cpp
#include <iostream>
using namespace std;
 
int main()
{
    int suma = 0, n;
    cin >> n;
    for( int i = 1; i <= n; i+= 2 )
    {
        if( i % 2 != 0 ) suma += i;
    }
 
    cout << suma << endl;
 
}
```


# Ejercicio K

> ecibes un entero positivo n. Imprime el siguiente número par.

> Un número par es un número que deja resto 0 al dividirlo por 2.

> Por ejemplo, si n=5, el siguiente número par es 6. Si n=8, el siguiente número par es 10.

- Input
> La única línea contiene un entero positivo n (1≤n≤1000).

- Output
> Imprime un entero positivo — el siguiente número par después del número dado.

- Codigo 

```cpp
#include <iostream>
using namespace std;
 
int main()
{
    int next, n;
    cin >> n; 
    n++;
    if( n % 2 != 0 ) n++;
    cout << n;
 
}
```

