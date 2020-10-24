// FibonacciRecursion.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>
#include <cmath>
#include <iostream>

double F[1500]; // global array pour la mémorisation des valeurs de Fib_mem a changé salon la grandeur de votre nombre, possible d'alloué de la mémoire avec malloc(C), ou new/vector(C++)

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 2) + fib(n - 1);
}

double fib_mem(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n] == 0)
            F[n - 2] = fib_mem(n - 2);
        if (F[n] == 0)
            F[n - 1] = fib_mem(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}

int Ifib(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;

    if (n <= 1)
        return n;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int main()
{
    double n = INFINITY;
    n = fib_mem(1500);
    std::cout << n;
}