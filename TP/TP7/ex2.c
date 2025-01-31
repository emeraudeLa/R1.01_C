#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef int vecteur[N] ;

void remplirVecteur (vecteur v);// initialise v avec les valeurs fournies au clavier .
void afficherVecteur (vecteur v);//affiche à l’écran les N coefficients du vecteur v.
void sommeVecteur (vecteur v1, vecteur v2, vecteur vSomme);// met dans vSomme la somme des vecteurs v1 et v2

int main (){
    vecteur vec1, vec2, vecSomme;
    remplirVecteur(vec1);
    printf("\n");
    
    remplirVecteur(vec2);
    printf("\n");

    sommeVecteur(vec1, vec2, vecSomme);
    afficherVecteur(vecSomme);

    return EXIT_SUCCESS;
}


void remplirVecteur (vecteur v)// initialise v avec les valeurs fournies au clavier .
{
    int valeursV;

    for(int i=0; i < N; i++)
    {
        printf("Valeur : ");
        scanf("%d",&valeursV);
        v[i]=valeursV;
    }
} 

void afficherVecteur (vecteur v)//affiche à l’écran les N coefficients du vecteur v.
{
    for(int i=0; i < N; i++)
    {
        printf("Valeur %d : %d\n",i,v[i]);
    }
}  

void sommeVecteur (vecteur v1, vecteur v2, vecteur vSomme) // met dans vSomme la somme des vecteurs v1 et v2
{
    for(int i=0; i < N; i++)
    {
        vSomme[i] = v1[i] + v2[i];
    }
}
