
#include <stdio.h>
#include <stdlib.h>

int main (){
    int nb,valeur,i,plusgrand;
    printf(" entrez un nombre de valeurs à rentrer: \n") ; 
    scanf("%d",&nb) ;
    i=1; 
    plusgrand= -10000000;
    while ( i <= nb ) {
        printf(" entrez une valeur : \n") ; 
        scanf("%d",&valeur) ;
        if (plusgrand<valeur)
        {
            plusgrand=valeur;
        }
        i=i+1;
    }

    printf("Plus grande valeur : %d\n",plusgrand) ;
    return EXIT_SUCCESS;
}
