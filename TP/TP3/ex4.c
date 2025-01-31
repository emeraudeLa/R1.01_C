/**
 *@brief lit au clavier le nombre de valeurs d’une suite de valeurs 
entières, puis les valeurs de la suite, et qui affiche la moyenne de ces valeurs.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int valeur,nb_val;
    float moyenne;
    moyenne=0;
    nb_val=0;
    printf(" entrez une valeur (-1 pour sortir) : \n") ; 
    scanf("%d",&valeur) ;
    while ( valeur != -1){
        moyenne=moyenne+valeur;
        nb_val=nb_val+1;
        printf(" entrez une valeur (-1 pour sortir) : \n") ; 
        scanf("%d",&valeur) ;
    }
    if (nb_val==0)
    {
        printf("Nombre de valeurs : %d donc pas de moyenne\n",nb_val);
    }
    else 
    {
        moyenne=moyenne/nb_val;
        printf("Moyenne valeurs : %.2f\n",moyenne) ;
    }
    
    return EXIT_SUCCESS;
}
