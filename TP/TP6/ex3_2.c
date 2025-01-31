#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int factorielle(int n);
void test();

int main (){
    
    
    /*int n;
    printf("n :");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorielle(n));*/

    test();
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

void test(){
    printf("valeur attendue : %d valeur obtenue : %d\n",1,factorielle(0));
    printf("valeur attendue : %d valeur obtenue : %d\n",1,factorielle(1));
    printf("valeur attendue : %d valeur obtenue : %d\n",2,factorielle(2));
    printf("valeur attendue : %d valeur obtenue : %d\n",6,factorielle(3));
    printf("valeur attendue : %d valeur obtenue : %d\n",5040,factorielle(7));
}