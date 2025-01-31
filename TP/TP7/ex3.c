#include <stdio.h>
#include <stdlib.h>

#define N 21

typedef int nombresNotes[N] ;

void initTab (nombresNotes tab);
void majTab (nombresNotes tab);
void afficherTab (nombresNotes tab);

int main (){
    
    nombresNotes nb={};
    initTab(nb);
    majTab(nb);
    afficherTab(nb);

    return EXIT_SUCCESS;
}

void initTab (nombresNotes tab)
{
    for(int i=0; i < N; i++)
    {
        tab[i]=0;
    }
}

void majTab (nombresNotes tab)
{
    int valNote=0;

    while(valNote != -1)
    {
        printf("Note : ");
        scanf("%d",&valNote);
        if (valNote != -1)
        {
            tab[valNote]=tab[valNote]+1;
        }
    }
}

void afficherTab (nombresNotes tab)
{
    for(int i=0; i < N; i++)
    {
        printf("Nombre de %d : %d\n",i,tab[i]);
    }
}
