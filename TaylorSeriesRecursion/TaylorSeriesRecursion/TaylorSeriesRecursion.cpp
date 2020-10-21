// TaylorSeriesRecursion.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;
    r = e(x, n - 1);
    p *= x;
    f *= n;
    return r + p / f;
}

double e_opti(int x, int n)
{
    static double s = 0;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e_opti(x, n - 1);
}

double Ie(int x, int n)
{
    double s = 1;
    int i;
    double num = 1;
    double den = 1;

    for (i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
}

int main()
{
    printf("%lf \n", e_opti(1, 10));
    return 0;
}