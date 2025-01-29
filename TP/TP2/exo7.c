#include <stdio.h>
#include <stdlib.h>

const int SEUIL_1 = 100, SEUIL_2=150, COUT_LOC=15;
const float PRIX_TRANCHE1=0.1, PRIX_TRANCHE2=0.15, PRIX_TRANCHE3=0.2, TVA=0.2;

int main()
{
    int conso;
    float prix, prix_final;
    printf("kWh consommés :");
    scanf("%d",&conso);
    if (conso<=SEUIL_1)
    {
        prix=conso*PRIX_TRANCHE1+COUT_LOC;
        prix_final=prix+(prix*TVA);
        printf("%d kWh => %.2f euros\n",conso,prix_final);
    }
    else if (conso>SEUIL_1 && conso<=SEUIL_2)
    {
        prix=SEUIL_1*PRIX_TRANCHE1 + (conso-SEUIL_1)*PRIX_TRANCHE2 +COUT_LOC;
        prix_final=prix+(prix*TVA);
        printf("%d kWh => %.2f euros\n",conso,prix_final);
    }
    else
    {
        prix=SEUIL_1*PRIX_TRANCHE1 + (SEUIL_2-SEUIL_1)*PRIX_TRANCHE2 + (conso-SEUIL_2)*PRIX_TRANCHE3 +COUT_LOC;
        prix_final=prix+(prix*TVA);
        printf("%d kWh => %.2f euros\n",conso,prix_final);
    }
    return EXIT_SUCCESS;
}