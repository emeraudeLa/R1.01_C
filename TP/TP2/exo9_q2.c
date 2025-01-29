#include <stdio.h>
#include <stdlib.h>
const int PRIX_ENFANTS_A=7, PRIX_ENFANTS_B=8, PRIX_ENFANTS_C=9, PRIX_ENFANTS_D=10;
const int PRIX_ADULTE_A=12, PRIX_ADULTE_B=14, PRIX_ADULTE_C=16, PRIX_ADULTE_D=18;

int main ()
{
    int nb_enfants, nb_adultes;
    float prix_final;
    char periode;

    printf("Nombre enfants :");
    scanf("%d",&nb_enfants);
    printf("Nombre adultes :");
    scanf("%d",&nb_adultes);

    printf("Période :");
    scanf("%c",&periode);
    
    if (periode!='A' || periode!='B' || periode!='C' || periode!='D')
    {
        printf("Période entrée pas dans les propositions");
        return EXIT_SUCCESS;
    }

    switch (periode)
    {
    case 'A':
        prix_final=nb_adultes*PRIX_ADULTE_A + nb_enfants*PRIX_ENFANTS_A;
        printf("Prix total: %.2f\n",prix_final);
        break;

    case 'B':
        prix_final=nb_adultes*PRIX_ADULTE_B + nb_enfants*PRIX_ENFANTS_B;
        printf("Prix total: %.2f\n",prix_final);
        break;
        break;

    case 'C':
        prix_final=nb_adultes*PRIX_ADULTE_C + nb_enfants*PRIX_ENFANTS_C;
        printf("Prix total: %.2f\n",prix_final);
        break;
        break;

    case 'D':
        prix_final=nb_adultes*PRIX_ADULTE_D + nb_enfants*PRIX_ENFANTS_D;
        printf("Prix total: %.2f\n",prix_final);
        break;
        break;
    }
    return EXIT_SUCCESS;
}