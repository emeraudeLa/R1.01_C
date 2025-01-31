#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 198 // 22 équipes de 9 coureurs = 198 coureurs

typedef struct{
    int c_numero;
    int c_temps;
}t_concurrent;

typedef t_concurrent t_tabconc[MAX];

void insere( t_concurrent c, t_tabconc tc, int n );
void permuter(t_concurrent* c1, t_concurrent* c2);
void affiche_classement ( t_tabconc tc, int n );

int main (){
    t_concurrent concurent;
    t_tabconc tabConcurent;
    int nbConcu=0;

    printf("temps : ");
    scanf("%d",&(concurent).c_temps);
    do{
        printf("numéro : ");
        scanf("%d",&(concurent).c_numero);
        insere(concurent, tabConcurent,nbConcu);
        nbConcu++;
        affiche_classement(tabConcurent,nbConcu);
        printf("temps : ");
        scanf("%d",&(concurent).c_temps);
    }while((concurent).c_temps!=-1);
    return EXIT_SUCCESS;
}

void insere( t_concurrent c, t_tabconc tc, int n )
{
    int vrai=1;
    tc[n]=c;
    while(vrai==1){
        if((tc[n].c_temps<tc[n-1].c_temps)&& n!=0)
        {
            permuter(&tc[n],&tc[n-1]);
            n--;
        }
        else
        {
            vrai=0;
        }
    }
}

void permuter(t_concurrent* c1, t_concurrent* c2)
{
    t_concurrent temp;

    temp=*c1;
    *c1=*c2;
    *c2=temp;
}

void affiche_classement ( t_tabconc tc, int n )
{   
    for(int i=0; i < n; i++)
    {   
        printf("%de : candidat n°%d\n",i+1,tc[i].c_numero);
    }
}
