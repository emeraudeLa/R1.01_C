#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

typedef int t_tab[N] ;

void triCroissant (t_tab tablo);
void affichageTab (t_tab tablo);
void triDecroissant (t_tab tab);
void remplirTableau(t_tab t);

int main (){
    srand(time(NULL));
    //t_tab t = {6, 9, 5, 8, 4, 6, 9, 5, 1, 2};
    //triCroissant(t);
    t_tab t;
    remplirTableau(t);
    triDecroissant(t);
    affichageTab(t);
    return EXIT_SUCCESS;
}

void triDecroissant (t_tab tab)
{   
    int temp;
    int max;
    for (int i=0; i<N; i++)
    {   
        max=i;
        for (int j=i; j < N; j++)
        {
            if (tab[max] < tab[j])
            {
                max = j;
            }
        }
        temp=tab[i];
        tab[i]=tab[max];
        tab[max]=temp;
    }
}

void triCroissant (t_tab tab)
{
    int temp;
    int min;
    for (int i=0; i<N; i++)
    {   
        min=i;
        for (int j=i; j < N; j++)
        {
            if (tab[min] > tab[j])
            {
                min = j;
            }
        }
        temp=tab[i];
        tab[i]=tab[min];
        tab[min]=temp;
    }
}

void affichageTab (t_tab tab){
    for (int i=0; i < N; i++)
    {
        printf("%d",tab[i]);
        printf("\n");
    }
}

void remplirTableau(t_tab t)
{   
    int nbAlea;
    for (int i=0; i < N; i++)
    {
        nbAlea=rand() % 10000001;
        t[i]=nbAlea;
    }
}