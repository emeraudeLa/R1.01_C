/**
 *@brief calcul de n!
*/

#include <stdio.h>
#include <stdlib.h>
int main (){
    int i, n , somme_factorielle;
    printf(" entrez un entier naturel : \n") ; 
    scanf("%d",&n) ;
    i=1; 
    somme_factorielle=1 ;
    while ( i <= n ) {
        somme_factorielle=somme_factorielle*i ;
        i=i+1;
    }
    printf("résultat : %d\n",somme_factorielle) ;
    return EXIT_SUCCESS;
}
