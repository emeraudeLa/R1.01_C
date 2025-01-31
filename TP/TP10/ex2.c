#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NM 12

typedef char t_chaine9[10];

typedef struct{
    t_chaine9 c_nom;
    int c_nbJours;
} t_mois;

typedef t_mois t_tabMois[NM];

t_tabMois tMois={ 
    {"janvier",31},
    {"fevrier",28},
    {"mars",31},
    {"avril",30},
    {"mai",31},
    {"juin",30},
    {"juillet",31},
    {"aout",31},
    {"septembre",30},
    {"octobre",31},
    {"novembre",30},
    {"decembre", 31}
};

void afficheMoisLong (t_tabMois tabMois);
int nombreJours(t_chaine9 nomMois);

int main (){
    t_chaine9 mois;
    printf("Mois : ");
    scanf("%s",mois);
    //afficheMoisLong(tMois);
    if(nombreJours(mois)!=-1)
    {
        printf("Nombre de jours dans %s : %d\n",mois,nombreJours(mois));
    }
    else{
        printf("Mois non recconu\n");
    }
    
    return EXIT_SUCCESS;
}

void afficheMoisLong (t_tabMois tabMois)
{
    for (int i=0; i<NM; i++){
        if(tabMois[i].c_nbJours==31)
        {
            printf("%s\n",tabMois[i].c_nom);
        }
    }
}

int nombreJours(t_chaine9 nomMois)
{
    int valeurRetourne=-1;
    for (int i=0; i<NM; i++){
        if(strcmp(tMois[i].c_nom,nomMois)==0)
        {
            valeurRetourne=tMois[i].c_nbJours;
        }
    }
    return valeurRetourne;
}