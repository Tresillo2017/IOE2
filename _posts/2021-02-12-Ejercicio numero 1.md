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
