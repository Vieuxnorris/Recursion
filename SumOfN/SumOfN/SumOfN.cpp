// SumOfN.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

int Isum(int n);

int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}

int Isum(int n)
{
    int s = 0;
    for (int i=0; i <= n; i++)
        s = s + i;
    return 0;
}

int main()
{
    int r = sum(5);
    printf("%d ", r);
    return 0;
}