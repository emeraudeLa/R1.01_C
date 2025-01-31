#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 100000

typedef int t_tab[N] ;

void tri_bulles(t_tab t);
void affichageTab (t_tab tablo);
void remplirTableau(t_tab t);

int main (){
    srand(time(NULL));
    //t_tab t = {6, 9, 5, 8, 4, 6, 9, 5, 1, 2};
    t_tab t;
    remplirTableau(t);
    tri_bulles(t);
    affichageTab(t);
    return EXIT_SUCCESS;
}

/*void tri_bulles(t_tab t)
{
    int temp;
    for (int i=0; i < N; i++)
    {
       for (int j=0; j < N-i-1; j++)
       {
        if (t[j] > t[j+1])
        {
            temp=t[j];
            t[j]=t[j+1];
            t[j+1]=temp;
        }
       }
    }
}*/

void tri_bulles(t_tab t)
{
    bool estTrie = false;
    int temp;
    int i=0;
    while (i < N - 1 && !estTrie)
    {
        estTrie=true;
        for (int j=0; j < N-i-1; j++)
        {
            if (t[j] > t[j+1])
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
                estTrie=false;
            }
        }
        i++;
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