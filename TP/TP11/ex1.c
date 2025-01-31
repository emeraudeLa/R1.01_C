#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char t_chaine50[51] ;
typedef char t_chaine10[11] ;

typedef struct{ 
    t_chaine50 c_nom;   // nom de l’abonné
    t_chaine10 c_num; // numéro de cet abonné
    int c_duree;  // durée pour laquelle il est abonné
} t_abonne ;


int main (){
    int choixUser;
    t_abonne abo;
    do{
        menu();

    }while (choixUser !=0)

    
    return EXIT_SUCCESS;
}


void lister (char nomFic[] )
{   // liste le contenu du fichier de
    //nom nomFic
    FILE * f ; 
    t_abonne a;
    //...
}

void menu(){
    switch(choixUser){
            case 1 :
            
            void()
        }
}

void saisie_abo (){
    printf("nom :");
    scanf("%s",(abo).c_nom)
    while((abo).c_nom!='*'){
        printf("num :");
        scanf("%s",(abo).c_num)
        printf("duree :");
        scanf("%d",(abo).c_duree)
        FILE * f;
        f=fopen("nom.txt","r");
        test(f);
        printf("nom :");
        scanf("%s",(abo).c_nom)
    }
}

void test (FILE * f) 
{
    if (f == NULL){
        fprintf(stder,"erreur d'ouverture");
        exit(EXIT_FAILURE);
    }
}