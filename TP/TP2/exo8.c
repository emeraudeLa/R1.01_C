#include <stdio.h>
#include <stdlib.h>
const int MIN_MOY_G =10, MIN_MOY_UE=8, NB_NOTES=2;

int main ()
{
    float moy_g, moy_ue1, moy_ue2;
    printf("Moyenne UE1 :");
    scanf("%f",&moy_ue1);
    printf("Moyenne UE2 :");
    scanf("%f",&moy_ue2);

    moy_g=(moy_ue1+moy_ue2)/2;
    if (moy_g<MIN_MOY_G)
    {
        printf("Jury souverain\n");
    }
    else if ((moy_g >=10 && moy_ue1<MIN_MOY_UE)|(moy_g >=10 && moy_ue2<MIN_MOY_UE))
    {
        printf("Redoublement de droit\n");
    }
    else
    {
        printf("Semestre validé\n");
    }
    return EXIT_SUCCESS;
}