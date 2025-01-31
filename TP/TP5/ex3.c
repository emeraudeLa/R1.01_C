#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int TAUX=20;
const char STOP='*';

void traiterUnEmploye(char nom[20], int salaire_b, float *total_salaires);
void afficherMoyenne (float salairesNet, int nbSalaries);

int main (){
    char nomEmploye[20];
    int salaireEmployeB;
    float totalSalairesEmploye;
    int nbGens;
    nbGens = 0;

    while (nomEmploye[0] != STOP)
    {
        printf("Nom employé :");
        scanf("%s",nomEmploye);
        if (nomEmploye[0] != STOP)
        {
            printf("Salaire brut de %s : ",nomEmploye);
            scanf("%d",&salaireEmployeB);
            traiterUnEmploye(nomEmploye,salaireEmployeB,&totalSalairesEmploye);
            nbGens = nbGens + 1;
        }
    }

    if (nbGens == 0)
    {
        printf("Pas d'employés rentrés\n");
    }
    else
    {
        afficherMoyenne(totalSalairesEmploye, nbGens);
    }
    
    return EXIT_SUCCESS;
}

void traiterUnEmploye(char nom[20], int salaire_b, float *total_salaires)
{
    float salaire_n;
    salaire_n=salaire_b - (salaire_b * TAUX)/100;
    *total_salaires = *total_salaires + salaire_n;
    printf("Salaire net de %s : %.2f\n",nom,salaire_n);
}

void afficherMoyenne (float salairesNet, int nbSalaries)
{
    float moyenne;
    moyenne=salairesNet/nbSalaries;
    printf("Salaire moyen : %.2f\n",moyenne);
}