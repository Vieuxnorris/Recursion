// StaticGlobal.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

//int x = 0; Global variable

int fun(int n)
{
    static int x = 0; // Static Variable
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int r;
    r = fun(5);
    printf("%d\n", r);

    r = fun(5);
    printf("%d\n", r);

    return 0;
}