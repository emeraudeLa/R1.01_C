#include <stdio.h>
#include <stdlib.h>
const int MAJEUR=18;
const int MINEUR=16;
const int EMANCIPE=1;
int main()
{
    int age,emancipe;

    printf("Quel est votre age ?");
    scanf("%d", &age);

    if (age>=MAJEUR)
    {
        printf("Vous pouvez créer votre entreprise.");
    }

    else if (age<MINEUR)
    {
        printf("Vous ne pouvez pas créer votre entreprise.");
    }
    
    else
    {
        printf("Etes-vous un mineur émancipé (1 pour oui, 2 pour non) ?");
        scanf("%d", &emancipe);
        if (emancipe==EMANCIPE)
        {
            printf("Vous pouvez créer votre entreprise.");
        }
        else
        {
            printf("Vous ne pouvez pas créer votre entreprise.");
        }
    }

    return EXIT_SUCCESS;
}