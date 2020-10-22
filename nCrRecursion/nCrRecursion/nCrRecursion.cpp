// nCrRecursion.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int nCr(int n, int r)
{
    int num, den;

    num = fact(n);
    den = fact(r) * fact(n - r);
    return num / den;
}

int nCr_opti(int n, int r)
{
    if (n == 0 || r == 0)
        return 1;
    return nCr_opti(n - 1, r - 1) + nCr_opti(n - 1, r);
}

int main()
{
    printf("%d \n", nCr_opti(5, 3));
    return 0;
}