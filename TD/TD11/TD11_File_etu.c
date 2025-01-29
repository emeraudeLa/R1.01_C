#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

// déclaration des constantes symboliques
#define MAX_MESSAGES 20
#define MAX_CAR 80
// définition des types

typedef char t_message[MAX_CAR];
typedef struct{
    t_message message;
}t_element;
typedef struct{
    t_element tabElt[MAX_MESSAGES];
    int nb;
}t_file;
// definition des constantes
const t_message ELT_VIDE= "------ce message est vide-------";

// prototypes des fonctions
void afficheTous(t_file f); // fonction secrete
t_file initialiser(t_file fileInit);
int estVide(t_file fileInit);
int estPleine(t_file file);
void enfiler (t_file *file, t_element nouvElt);
void defiler (t_file *file);
void vider(t_file *file);
t_element tete(t_file file);
void supprimer_trop_anciens (t_file *file, int nbAnciens);
void sauvegardeFichier(char nomFichier, t_file *file);
void lectureFichier ();

// programme principal
int main(){
    // Declaration des variables
    t_file maFile;
    t_element elt;
    t_message msg;
    int choix;
    // initialisation
    maFile = initialiser();
    // ajouter quelques elements directement
    strcpy(maFile.tabElt[0].message,"message 0");
    strcpy(maFile.tabElt[1].message,"message 1");
    strcpy(maFile.tabElt[2].message,"message 2");
    maFile.nb = 3;

    /*
    char msg[MAX_CAR] ; 
    printf("saisir un nouveau message : ");
    fgets(msg,MAX_CAR, stdin);  // vider le buffeur de caractères (si nécessaire).
    fgets(msg, MAX_CAR, stdin); // saisie d'une chaine de caractères de MAX_CAR caractères au maximum.
    msg[strlen(msg)-1]='\0'; // suppression du caractère ‘\n’ de validation de fin de saisie.

    */

    do{ // menu
        printf("----------------------------------------------------\n");
        printf("0 : quitter\n");
        printf("1 : afficher le nombre d'elements dans la file ?\n");
        printf("2 : ajouter un element a la file\n");
        printf("3 : retirer un element et afficher le message \n");
        printf("4 : afficher le message de la tete de file\n");
        printf("5 : vider la file\n");
        printf("6 : la file est-elle vide ?\n");
        printf("7 : la file est-elle pleine ?\n");
        printf("8 : supprimer les messages trop anciens\n");
        printf("9 : sauvegarde dans un fichier texte et vider\n");
        printf("10: lecture des messages du fichier texte\n");
        printf("votre choix : ");
        scanf("%d", &choix);
        printf("----------------------------------------------------\n");
        // traitement
        switch(choix){
            case -1 :   afficheTous(maFile);
            case 0:     break;
            case 1:     // afficher le nombre d'elements dans la file
                        printf("Nombre d'elements dans la file : %d", maFile.nb)
                        break;
            case 2:     // ajouter un element (à donner aux étudiants)
                        char msg[MAX_CAR] ; 
                        printf("saisir un nouveau message : ");
                        fgets(msg,MAX_CAR, stdin);  // vider le buffeur de caractères (si nécessaire).
                        fgets(msg, MAX_CAR, stdin); // saisie d'une chaine de caractères de MAX_CAR caractères au maximum.
                        msg[strlen(msg)-1]='\0'; // suppression du caractère ‘\n’ de validation de fin de saisie.
                        enfiler(maFile, msg)
                        break;
            case 3:    // retirer un element et afficher le message
                        printf("Element retiré : %s", maFile[0]);
                        defiler(maFile);
                        break;
            case 4:    // afficher le message de la tete de file
                        printf("Tete de file : %s",tete(maFile));
                        break; 
            case 5:    // vider la file
                        printf("File vidée");
                        vider(maFile);
                        break;
            case 6:    // la file est-elle vide ?
                        if(estVide(maFile)==1)
                        {
                            printf("File vide");
                        }
                        else
                        {printf("File non vide");}
                         break;
            case 7:    // la file est-elle pleine ?
                        if(estVide(maFile)==1)
                        {
                            printf("File vide");
                        }
                        else
                        {printf("File non vide");}
                         break;
                        break;
            case 8:     // supprimer les messages trop anciens
                        break;
            case 9:     //sauvegarde dans un fichier texte et vider
                        break;
            case 10:    //lecture des messages du fichier texte
                        break;
            default :   printf("erreur de saisie\n");
        }
    }while(choix != 0);
    return EXIT_SUCCESS;
}
// Definitions des fonctions
void afficheTous(t_file f){ // fonction secrete
    for(int i=0 ; i<MAX_MESSAGES ; i++){
        printf("%d %s\n",i, f.tabElt[i].message);
    }
}

t_file initialiser(t_file fileInit)
{
    for (int i=0; i< MAX_MESSAGES; i++)
    {
        fileInit.tabElt[i]=ELT_VIDE;
    }
    fileInit.nb=0;
    return fileInit;
}

int estVide(t_file fileInit)
{
    return (file.nb==0);
}

int estPleine(t_file file)
{
    return (file.nb==MAX_MESSAGES);
}

void enfiler (t_file *file, t_element nouvElt)
{
    if(estPleine(*file)==0)
    {
    file[(file.nb)]=nouvElt;
    file.nb++;}
}

void defiler (t_file *file)
{
    if(estVide==0)
        {file[0]=ELT_VIDE;
        file.nb--;
        for (int i=0; i<file.nb-1; i++)
        {
            file[i]=file[i+1];
        }}
}

void vider(t_file *file)
{
    for (int i=0; i<file.nb-1; i++)
    {
        file[i]=ELT_VIDE;
    }
}

t_element tete(t_file file)
{
 return (file[0]);
}

void supprimer_trop_anciens (t_file *file, int nbAnciens)
{
    for (int i=0; i< nbAnciens; i++)
    {
        defiler(*file);
    }
}

void sauvegardeFichier(char nomFichier, t_file *file)
{
    /*mettre sauvegarde fichier */
    vider(*file);
}

void lectureFichier ()
{
    /*lecture des messages*/
}