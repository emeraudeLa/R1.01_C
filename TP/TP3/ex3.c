/**
 *@brief lit au clavier le nombre de valeurs d’une suite de valeurs 
entières, puis les valeurs de la suite, et qui affiche la moyenne de ces valeurs.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int nb,valeur,i;
    float moyenne;
    printf(" entrez un nombre de valeurs à rentrer: \n") ; 
    scanf("%d",&nb) ;
    i=1; 
    moyenne=0;
    while ( i <= nb ) {
        printf(" entrez une valeur : \n") ; 
        scanf("%d",&valeur) ;
        moyenne=moyenne+valeur ;
        i=i+1;
    }
    if (nb==0)
    {
        printf("Nombre de valeurs : %d donc pas de moyenne\n",nb);
    }
    else 
    {
        moyenne=moyenne/nb;
        printf("Nombre de valeurs : %d\nMoyenne valeurs : %.2f\n",nb,moyenne) ;
    }
    return EXIT_SUCCESS;
}
