#include <stdio.h>
#include <stdlib.h>

void ligneTirets (int n);
void ligneCourante (int n);
void corps (int n, int larg);

int main (){
    int hauteur, largeur;

    printf("hauteur :");
    scanf("%d",&hauteur);

    printf("largeur :");
    scanf("%d",&largeur);

    corps(hauteur,largeur);
}

void ligneTirets (int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("-");
    }
    printf("\n");
}

void ligneCourante (int n)
{
    int i;
    printf("I");
    for (i=0; i<n-2; i++)
    {
        printf(" ");
    }
    printf("I");
    printf("\n");
}

void corps (int n, int larg)
{   
    int i;
    ligneTirets(larg);
    for (i=0; i<n; i++)
    {
        ligneCourante(larg);
    }
    ligneTirets(larg);
    
}