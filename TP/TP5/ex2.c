#include <stdio.h>
#include <stdlib.h>

const int STOP=0;

void suite(int nb, int *min, int *max);

int main (){
    int nb;
    int min, max;
    max=-1;
    min=10000000;

    do{
        printf("Entrer valeur :");
        scanf("%d",&nb);
        if (nb<0){
            printf("Erreur, valeur négative\nEntrer valeur :");
            scanf("%d",&nb);
        }
        if (nb!=0)
        {
            suite (nb, &min, &max);
        }

    }while (nb !=0);
    
    if(max==-1)
    {
        printf("Suite de valeurs vide, pas de min, pas de max\n");
    }
    else
    {
        printf("Min : %d\nMax : %d\n",min,max);
    }
    return EXIT_SUCCESS;
}

void suite(int nb, int *min, int *max)
{
    if (nb < *min)
    {
        *min = nb;
    }
    if (nb > *max)
    {
        *max = nb;
    }
}