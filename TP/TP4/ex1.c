#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void afficheTxt (char nom[50],char grp[10], char mat[50], char exo[50]);

int main (){
    char auteur[50];
    char groupe[10];
    char matiere[50];
    char exercice[50];

    printf("Auteur :");
    fgets (auteur,50,stdin); //alternative de scanf("%s",auteur);

    printf("Groupe :");
    scanf("%s",groupe);

    printf("Matiere :");
    scanf("%s",matiere);

    printf("Exercice :");
    scanf("%s",exercice);

    afficheTxt(auteur,groupe,matiere,exercice);
}

void afficheTxt (char nom[50],char grp[10], char mat[50], char exo[50]){
    printf("\nAuteur : %sGroupe : %s\n",nom,grp);
    printf("Matiere : %s\n",mat);
    printf("Exercice : %s\n",exo);
}

// pour afficher pleins de var :,
// printf ("%d : %d : %d ", h, min, s);