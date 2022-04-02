#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double f(double x)
{
    return 42.0 * pow(x, 3) + 13.0 * pow(x, 2) + 1337.0 * x;
}

double derivadaf(double x)
{
    return 126.0 * pow(x, 2) + 26.0 * x + 1337.0;
}

int main()
{
    long long int c;
    cin >> c;
    double xi = 100000.191921923881;
    while (1)
    {
        double c1 = c;
        double valor = f(xi) - c1 * 1.0;
        double derivada = derivadaf(xi);
        // cout << valor << " " << xi << " " << derivada << endl;
        double xi_1 = xi - (valor / derivada);
        if (abs(xi_1 - xi) < 10e-8)
        {
            break;
        }
        xi = xi_1;
    }
    cout << setprecision(10) << xi;
}