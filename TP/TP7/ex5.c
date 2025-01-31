#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define N 9

typedef int tArgent[N];

const char STOP = '*';
const int VALEURS[N]={500,200,100,50,20,10,5,2,1};

void initTab (tArgent total);
void decompoSomme (int valeur, tArgent total);
void affichage(tArgent total);

int main (){
    tArgent tabArgent={};
    

    //manque affichage de fin avec recap
    int val;
    char nom[20];
    while (nom[0]!=STOP)
    {
        printf("Nom ? : ");
        scanf("%s",nom);
        if (nom[0]!=STOP)
        {
            printf("Somme ? : ");
            scanf("%d",&val);

            initTab(tabArgent);
            decompoSomme(val,tabArgent);
            printf("\n%s :\n",nom);
            affichage(tabArgent);
            printf("\n");
        }
        
    }
    
    return EXIT_SUCCESS;
}

void initTab (tArgent total)
{
    for(int i=0; i < N; i++)
    {
        total[i]=0;
    }
}

void decompoSomme (int somme,tArgent total)
{   
    int i=0;

    while(somme > 0 && i < N)
    {
        if(somme>=VALEURS[i])
        {
            somme = somme-VALEURS[i];
            total[i] = total[i] + 1;
        }
        else
        {
            i = i + 1;
        }
    }
}

void affichage(tArgent total)
{
    //affichage
    for (int i = 0; i < N; i++)
    {
        if (total[i] > 0)//si pièces de cette valeur, alors affiche
        {
            printf("    %d x %d\n", total[i], VALEURS[i]);
        }
    }
}
