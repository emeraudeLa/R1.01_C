#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define N 8

typedef char mot8lettres[N] ;

void init(mot8lettres mot);
void saisir(mot8lettres *mot);
void afficher(mot8lettres mot);
bool contient (mot8lettres mot, char caractere);

int main (){
    mot8lettres motTest;
    init(motTest);
    saisir(&motTest);
    afficher(motTest);
    printf("\n");
    if(contient (motTest,'x')==true)
    {
        printf("x présent dans le mot\n");
    }

    return EXIT_SUCCESS;
}

void init(mot8lettres mot)
{
    for (int i=0; i< N; i++)
    {
        mot[i]='*';
    }
}

void saisir(mot8lettres *mot)
{
    printf("Mot : ");
    scanf("%s",*mot);
}

void afficher(mot8lettres mot)
{
    printf("%s",mot);
}

bool contient (mot8lettres mot, char caractere)
{   
    bool present=false;
    for (int i=0; i< N; i++)
    {
        if (mot[i]==caractere)
        {
            present=true;
        }
    }
    return present;
}

