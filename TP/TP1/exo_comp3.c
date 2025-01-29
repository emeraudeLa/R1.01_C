#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    //variables
    float prix1, prix2;

    //init variables
    printf("Prix 1 : ");
    scanf("%f", &prix1);

    printf("Prix 2 : ");
    scanf("%f", &prix2);

    //affichage prix hors taxe
    printf("Hausse de %1.2f pourcents", ((prix2 - prix1)/prix1)*100);


    EXIT_SUCCESS;
}