#include <stdio.h>
#include <stdlib.h>
const int QUALIFIE=2;
const int TROISIEME=3;
const int TEMPS=47;

int main()
{
    int classement,temps;

    printf("Votre classement ?");
    scanf("%d", &classement);

    if (classement<=QUALIFIE)
    {
        printf("Bravo, rendez-vous pour la finale.");
    }
    
    else if (classement>TROISIEME)
    {
        printf("Désolé, votre participation se termine ici.");
    }
    
    else
    {
        printf("Quel temps avez-vous fait ?");
        scanf("%d", &temps);
        if (temps<TEMPS)
        {
            printf("Bravo, rendez-vous pour la finale.");
        }
        else
        {
            printf("Désolé, votre participation se termine ici.");
        }
    }

    return EXIT_SUCCESS;
}