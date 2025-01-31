#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int factorielle(int n);

int main (){
    int n;
    printf("n :");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorielle(n));

    return EXIT_SUCCESS;
}
int factorielle(int n)
{
    /* version plus longue de la fonction
    int resultat = 1;
    for (int i = 2; i <= n; i++)
    {
        resultat *= i;
    }
    return resultat;
    */
    return (n < 2) ? 1 : n * factorielle(n -1);
}
