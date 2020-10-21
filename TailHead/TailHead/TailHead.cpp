// TailHead.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n); // Tail Recursion
        fun(n - 1);
        //printf("%d ", n); // Head Recursion
    }
}

int main()
{
    int n = 3;

    fun(n);
    return 0;
}
