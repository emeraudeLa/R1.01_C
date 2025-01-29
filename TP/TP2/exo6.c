#include <stdio.h>
#include <stdlib.h>
const float FACT_TH=1.2, FACT_ELEC=1.0;
const int JOUR_TH=10, JOUR_ELEC=15;
int main()
{
    int jours, km;
    float total_th, total_elec;

    printf("Jours :");
    scanf("%d",&jours);
    printf("Kms :");
    scanf("%d",&km);

    total_th=jours*JOUR_TH + km*FACT_TH;
    total_elec=jours*JOUR_ELEC + km*FACT_ELEC;
    
    if (total_th<total_elec)
    {
        printf ("%d jours et %d kms => véhicule thermique moins coûteux (%.2f euros contre %.2f euros)\n",jours,km,total_th,total_elec);
    }
    else if (total_th==total_elec)
    {
        printf("%d jours et %d kms => égalité (%.2f euros)\n",jours,km,total_th);
    }
    else 
    {
        printf ("%d jours et %d kms => véhicule électrique moins coûteux (%.2f euros contre %.2f euros)\n",jours,km,total_elec,total_th);
    }
    return EXIT_SUCCESS;
}