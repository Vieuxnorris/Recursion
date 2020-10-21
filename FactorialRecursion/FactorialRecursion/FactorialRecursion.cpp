// FactorialRecursion.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}

int Ifact(int n)
{
    int f = 0;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main()
{
    int fact_num = 0;
    fact_num = fact(5);
    printf("%d\n", fact_num);
}