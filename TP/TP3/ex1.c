/**
 *@brief Que fait ce programme ? là est la question ...
*/

#include <stdio.h>
#include <stdlib.h>
int main (){
    int i, n , somme;
    printf(" entrez un entier naturel : \n") ; 
    scanf("%d",&n) ;
    i=1; 
    somme=0 ;
    while ( i<= n ) {
        somme=somme+i ;
        i=i+1;
    }
    printf("résultat : %d\n",somme) ;
    return EXIT_SUCCESS;
}

/*Ce programme rajoute 1 à la somme tant que i est
inférieur ou égal à n*/