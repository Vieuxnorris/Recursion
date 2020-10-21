// PowerRecursion.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

int power(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return power(m, n - 1)*m;
}

int power_opti(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power_opti(m * m, n / 2);
    return m * power_opti(m * m, (n - 1) / 2);
}

int Ipower(int m, int n)
{
    int power = m;
    for (int i = 1; i < n; n--)
    {
        power *= m;
    }
    return power;
}

int main()
{
    int powerI, powerR;
    powerI = Ipower(2, 9);
    powerR = power_opti(2, 9);
    printf("R --> %d | I --> %d\n", powerR, powerI);
    return 0;
}