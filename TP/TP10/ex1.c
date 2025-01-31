#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NB_CHAR 20

typedef char chaine20[NB_CHAR];

typedef struct{
    chaine20 nom;
    chaine20 prenom;
    int age;
} t_etudiant;

void afficheEtu (t_etudiant etudiant);
void initEtu (t_etudiant *etudiant);
int compare(t_etudiant e1, t_etudiant e2);

int main (){
    t_etudiant etudiant1;
    t_etudiant etudiant2;
    initEtu(&etudiant1);
    afficheEtu(etudiant1);
    initEtu(&etudiant2);
    afficheEtu(etudiant2);
    if(compare(etudiant1,etudiant2)==0)
    {
        printf("%s et %s ont le même age \n",(etudiant1).prenom,(etudiant2).prenom);
    }
    else if(compare(etudiant1,etudiant2)>0)
    {
        printf("%s est plus vieux que %s \n",(etudiant1).prenom,(etudiant2).prenom);
    }
    else
    {
        printf("%s est plus jeune que %s \n",(etudiant1).prenom,(etudiant2).prenom);
    }
    return EXIT_SUCCESS;
}

void afficheEtu (t_etudiant etudiant)
{
    printf("Etudiant : %s %s, %d ans\n",(etudiant).prenom,(etudiant).nom, (etudiant).age);
}

void initEtu (t_etudiant *etudiant)
{
    printf("Nom : ");
    scanf("%s",(*etudiant).nom);
    printf("Prénom : ");
    scanf("%s",(*etudiant).prenom);
    printf("Age : ");
    scanf("%d",&etudiant->age);
}

int compare(t_etudiant e1, t_etudiant e2)
{
    int valeurRetourne=-1;
    if(e1.age==e2.age)
    {
        valeurRetourne=0;
    }
    else if(e1.age>e2.age)
    {
        valeurRetourne=1;
    }
    return valeurRetourne;
}