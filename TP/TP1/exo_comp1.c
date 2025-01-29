#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    //variables
    int prix;
    float taxe;

    //init variables
    printf("Prix hors taxe : ");
    scanf("%d", &prix);

    printf("Taux de taxe :");
    scanf("%f",&taxe);

    //affichage ttc
    printf("Montant TTC=%1.2f", prix*taxe);

    EXIT_SUCCESS;
}