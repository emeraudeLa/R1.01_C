#include <stdio.h>
#include <stdlib.h>

void ligneTirets (int n);
void ligneCourante (int nl);
void corps (int n);

int main (){
    int hauteur;

    printf("hauteur :");
    scanf("%d",&hauteur);

    corps(hauteur);
}

void ligneTirets (int n)
{
    int i;
    for (i=0; i<n+1; i++)
    {
        printf("-");
    }
    printf("\n");
}

void ligneCourante (int nl)
{
    int i;
    printf("I");
    for (i=0; i<nl-1; i++)
    {
        printf(" ");
    }
    printf("\\");
    printf("\n");
}

void corps (int n)
{   
    int i;
    for (i=1; i<n+1; i++)
    {
        ligneCourante(i);
    }
    ligneTirets(n);
    
}