/** 
* @brief Recette de far breton pour 8 personnes 
*/ 
#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
    // variables contenant les quantités
    float pruneaux, farine, sucre, lait, oeufs; 
    int personne; 
    // initialisation des quantités
    pruneaux = 250.0; 
    farine = 200.0; 
    sucre = 150.0; 
    oeufs = 4.0; 
    lait = 0.75; 
    // affichage des quantités
    printf("Nombre de personnes pour la recette : ");
    scanf("%d",&personne);
    printf("Pour préparer un Far Breton pour 8 personnes, il faut :\n"); 
    printf(" %5.1f grammes de pruneaux\n", (pruneaux*personne)/8); 
    printf(" %5.1f grammes de farine\n", (farine*personne)/8); 
    printf(" %5.1f grammes de sucre\n", (sucre*personne)/8); 
    printf(" %4.2f oeufs\n", (oeufs*personne)/8); 
    printf(" %4.3f litre(s) de lait", (lait*personne)/8); 
    return EXIT_SUCCESS; 
}
