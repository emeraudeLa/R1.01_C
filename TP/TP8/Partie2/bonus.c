//Programme de tri naïf
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10

typedef int t_tab[N] ;


void affichageTab (t_tab tablo);
void triTabAux (t_tab tabAux, t_tab tabFinal);
void remplirTableau(t_tab t);
bool estTrie (t_tab t);

int main (){
    srand(time(NULL));
    t_tab t = {6, 9, 5, 8, 4, 6, 9, 5, 1, 2};
    t_tab tabAux;
    while (!estTrie(t)){
        remplirTableau(tabAux);
        triTabAux (tabAux,t);
    }
    affichageTab(t);
    
    return EXIT_SUCCESS;
}

void triTabAux (t_tab tabAux, t_tab tabFinal)
{   
    int temp, temp2;
    int min;
    for (int i=0; i<N; i++)
    {   
        min=i;
        for (int j=i; j < N; j++)
        {
            if (tabAux[min] > tabAux[j])
            {
                min = j;
            }
        }
        temp=tabAux[i];
        tabAux[i]=tabAux[min];
        tabAux[min]=temp;

        temp2=tabFinal[i];
        tabFinal[i]=tabFinal[min];
        tabFinal[min]=temp2;
    }
}

bool estTrie (t_tab t)
{   
    bool estTrie=true;
    for (int i=0; i < N-1; i++)
    {
        if(t[i]>t[i+1])
        {
            estTrie=false;
        }
    }
    return estTrie;
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
        nbAlea=rand() % 101;
        t[i]=nbAlea;
    }
}