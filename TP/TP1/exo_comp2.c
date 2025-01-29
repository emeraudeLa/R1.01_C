#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    //variables
    float ttc, taxe;

    //init variables
    printf("Prix ttc : ");
    scanf("%f", &ttc);

    printf("Montant taxe: ");
    scanf("%f", &taxe);

    //affichage prix hors taxe
    printf("Montant prix hors taxe=%1.2f", ttc/taxe);


    EXIT_SUCCESS;
}